from primitives import Point

def Member(**kwargs):
    """
    Class factory that returns the appropriate class depending
    on the arguments used.
    """
    wishbone_properties = ['ob_point', 'ib_fore_point', 'ib_aft_point']
    rod_properties = ['ob_point', 'ib_point']

    class SuspensionMember(object):
        def __init__(self, **kwargs):
            for key, value in kwargs:
                self.__setattr__(key, value)
    class Wishbone(SuspensionMember):
        pass
    class Rod(SuspensionMember):
        pass

    if all([props in kwargs.keys() for props in wishbone_properties]):
        print 'wishbone'
        return Wishbone(kwargs)
    elif all([props in kwargs.keys() for props in rod_properties]):
        return Rod(kwargs)

class Suspension(object):
    def __init__(self):
        pass
