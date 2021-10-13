import numpy as np

def unit_vector(vector):
    """ Returns the unit vector of the vector"""
    return vector / np.linalg.norm(vector)

def angle_between(v1, v2):
    """ Returns the angle in radians between vectors 'v1' and 'v2'"""
    v1_u = unit_vector(v1)
    v2_u = unit_vector(v2)
    return np.arccos(np.clip(np.dot(v1_u, v2_u), -1.0, 1.0))

"""Example:

    Input:
        vector_1 = [0, 1]
        vector_2 = [1, 0]
    Output:
        1.5707963267948966
"""
