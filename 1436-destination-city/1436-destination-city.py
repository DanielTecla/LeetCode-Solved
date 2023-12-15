class Solution:
    def destCity(self, paths):
        visit = set()
        connection = {}

        if len(paths) == 1:
            return paths[0][1]
        location = paths[0][0]
        for item in paths:
            connection[item[0]] = item[1]

        while location not in visit and location in connection:
            visit.add(location)
            location = connection[location]

        return location
