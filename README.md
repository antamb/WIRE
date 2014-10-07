WIRE
====

graphically create the schematic representation of land embossed.

USAGE
===

    ./fdf _map_ : _map_ : map is a simple text file

## Example

    $>cat ./map
    0 0 0 0 0 0 0 0 0 0
    0 10 10 10 10 10 10 10 10 0
    0 10 20 15 12 15 17 20 10 0
    0 10 15 10 12 15 15 15 10 0
    0 5 15 10 12 15 15 13 10 0
    0 5 10 5 7 12 12 12 10 0
    0 5 7 1 2 7 5 5 7 0
    0 3 0 0 1 2 2 2 5 0
    0 1 0 0 0 0 0 0 3 0
    0 0 0 0 0 0 0 0 0 0
    
    $>./fdf map

