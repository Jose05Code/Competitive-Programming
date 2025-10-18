from beautifulAverage import B_average

def test_average():
    x = [7, 1, 6, 9, 9]
    assert B_average(x) == 9
    x = [3, 3, 3]
    assert B_average(x) == 3
    x = [3, 4, 4, 4, 3]
    assert B_average(x) == 4