from primitives import Point

class SuspensionMember(object):
    """
    Super class inherited by Suspension Member classes. Do not instantiate
    directly.
    """
    def __init__(self, parent, **kwargs):
        for arg in kwargs.iteritems():
            if arg[0] not in self._properties.keys():
                raise ValueError('Valid keyword arguments for this class are: \
                        %s' % ', '.join(self._properties))
            expected_type = self._properties[arg[0]]
            if not isinstance(args[1], expected_type): 
                raise TypeError('Value of %s expected to be %s' % 
                        (args[1], expected_type))
            self.__setattr__(arg[0], arg[1])

class Wishbone(SuspensionMember):
    def __init__(self, **kwargs):
        self._properties = {
                'ob_point': Point,
                'ib_fore_point': Point, 
                'ib_aft_point': Point
                }
        super(Wishbone, self).__init__(kwargs)

class Rod(SuspensionMember):
    def __init__(self, **kwargs):
        self._properties = {
                'ob_point': Point,
                'ib_point': Point
                }
        super(Rod, self).__init__(kwargs)

class Suspension(object):
    def __init__(self):
        pass
