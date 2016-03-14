# astonia3_server
Clean-up of the Astonia 3 server

## To build.
1. Checkout the repository.
2. Install mysql development headers
  - Ubuntu: `sudo apt-get install libmysqlclient-dev`
  - Arch: `sudo pacman -S mariadb`
3. Run `cd server && mkdir -p .obj && make`
