# argument: id
# get anon.txt and filter my id, result in file named eu
wget -q -O - http://lad.ufcg.edu.br/loac/uploads/OAC/anon.txt | grep "^$1 " >eu
# filter out each type and sum it up
tik=$(grep tinker:        eu | awk '{sum+=$3} END{print sum;}')
fac=$(grep Falstad_comb:  eu | awk '{sum+=$3} END{print sum;}')
faf=$(grep Falstad_ff:    eu | awk '{sum+=$3} END{print sum;}')
fpc=$(grep FPGA_comb:     eu | awk '{sum+=$3} END{print sum;}')
fpf=$(grep FPGA_ff:       eu | awk '{sum+=$3} END{print sum;}')
par=$(grep para:          eu | awk '{sum+=$3} END{print sum;}')
liv=$(grep livre:         eu | awk '{sum+=$3} END{print sum;}')
cha=$(grep chat:          eu | awk '{sum+=$3} END{print sum;}')
pip=$(grep pipe:          eu | awk '{sum+=$3} END{print sum;}')
prc=$(grep proc:          eu | awk '{sum+=$3} END{print sum;}')
# put 0 in empty variables
[ -z $tik ] && tik=0
[ -z $fac ] && fac=0
[ -z $faf ] && faf=0
[ -z $fpc ] && fpc=0
[ -z $fpf ] && fpf=0
[ -z $par ] && par=0
[ -z $liv ] && liv=0
[ -z $cha ] && cha=0
[ -z $pip ] && pip=0
[ -z $prc ] && prc=0
# print cents before applying limits
echo "tinker:$tik Falstad_comb:$fac Falstad_ff:$faf FPGA_comb:$fpc para:$par FPGA_ff:$fpf livre:$liv"
[ $fac -gt 100 ] && fac=100   # limitar  Falstad_comb
cb=$(expr $tik + $fac + $fpc) # calcular combinacional
[ $cb  -gt 200 ] && cb=200    # limitar  combinacional
cf=$(expr  $cb + $faf + $fpf) # calcular combinacional+sequencial
[ $cf  -gt 600 ] && cf=600    # limitar  combinacional+sequencial
[ $par -gt 100 ] && par=100   # limitar  paralelismo
[ $prc -lt 100 ] && liv=0     # limitar  livre
# print cents after applying limits
echo "combinacional+sequencial:$cf chat:$cha para:$par livre:$liv pipe:$pip proc:$prc"
echo "total:$(expr             $cf    + $cha    + $par     + $liv     + $pip   + $prc)"
