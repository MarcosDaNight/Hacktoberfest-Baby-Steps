(function () {
    const quotes = [
        {
            quote:
              " Life is a sleazy stranger, who looks vaguely familiar; flirting with a bimbo named disaster at the end of the bar. ",
            author: "- Ani DiFranco"
          },
          {
            quote:
              " I have a theory that the answers to all of life’s major questions can found in a John Mayer song. ",
            author: "- Susane Colasanti"
          },
          {
            quote:
              " It’s not the length of life, but the depth of life. ",
            author: "- Ralph Waldo Emerson"
          },
          {
            quote: " If you hear a voice within you say 'you cannot paint,' then by all means paint and that voice will be silenced. ",
            author: "- Vincent Van Gogh"
          },
          {
            quote:
              " Love is an untamed force. When we try to control it, it destroys us. When we try to imprison it, it enslaves us. When we try to understand it, it leaves us feeling lost and confused. ",
            author: "- Paulo Coelho"
          },
          {
            quote:
              " A critic is someone who never actually goes to the battle, yet who afterwards comes out shooting the wounded. ",
            author: "- Tyne Daly"
          }
    ]
    
    const btn = document.getElementById('generate-btn')
    btn.addEventListener('click', function() {
        let random = Math.floor(Math.random() * quotes.length)
        document.getElementById('quote').textContent = quotes[random].quote
        document.querySelector('.author').textContent = quotes[random].author
    })
})()