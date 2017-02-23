class Point(object):
    """
    A class that contains the cartesian coordinates to a point.
    This class does implicit type checking to ensure that the input 
    can be cast to a float value and raises a valueError if it cannot.
    """
<<<<<<< HEAD
=======

>>>>>>> master
    def __init__(self, x, y, z):
        """
        Create a point object

        :param x: X-coordinate
        :param y: Y-coordinate
        :param z: Z-coordinate
        :type x: Castable to float
        :type y: Castable to float
        :type z: Castable to float
        :rtype: None
        """
        self.coordinates = (x, y, z)

<<<<<<< HEAD
    def __repr__(self):
        return self.coordinates

=======
>>>>>>> master
    @property
    def coordinates(self):
        """
        Returns the x, y, z coordinates as a three element list.

        :rtype: List
        """
        return(self.x, self.y, self.z)

    @coordinates.setter
<<<<<<< HEAD
    def coordinates(self, values):
        if not len(values) == 3:
            raise ValueError( 'Can only set three components of a point: x, y, z.')
        
        for test_value in {'x': values[0], 'y': values[1], 'z': values[2]}.iteritems():
=======
    def coordinates(self, value):
        if not len(value) == 3:
            raise ValueError('Can only set three components of a point: x, y, z.')

        for test_value in {'x': value[0], 'y': value[1], 'z': value[2]}.iteritems():
>>>>>>> master
            try:
                test_float_value = float(test_value[1])
            except ValueError:
                raise ValueError('Point coordinates must be floats \
<<<<<<< HEAD
                        or types castable to float.')
            else:
                self.__setattr__(test_value[0], test_float_value)
=======
                        or types castable to float')
            else:
                self.__setattr__(test_value[0], test_float_value)
    

>>>>>>> master
