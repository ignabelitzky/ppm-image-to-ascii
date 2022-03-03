# PPM Image to ASCII
Simple program that translate a PPM image (max 200x200 pixels) into ASCII characters.

## To compile
Just use the Makefile
```console
make run
```

## To execute the program
```console
bin/ppm-to-ascii.out resources/horse_200x200.ppm
```
## Redirecting the output to a file
In Linux you can redirect the output to a file like this
```console
bin/ppm-to-ascii.out resources/horse_200x200.ppm > output.txt
```

## License
[GNU General Public License v3.0](https://www.gnu.org/licenses/gpl-3.0.html)
