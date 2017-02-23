class Point(object):
    """
    A class that contains the cartesian coordinates to a point.
    This class does implicit type checking to ensure that the input 
    can be cast to a float value and raises a valueError if it cannot.
    """
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

    @property
    def coordinates(self):
        """
        Returns the x, y, z coordinates as a three element list.

        :rtype: List
        """
        return(x, y, z)

    @coordinates.setter
    def coordinates(self, values):
        if not len(values) == 3:
            raise ValueError( 'Can only set three components of a point: x, y, z.')
        
        for test_value in {'x': values[0], 'y': values[1], 'z': values[2]}.iteritems():
            try:
                test_float_value = float(test_value[1])
            except ValueError:
                raise ValueError('Point coordinates must be floats \
                        or types castable to float.')
            else:
                self.__setattr__(test_value[0], test_float_value)
