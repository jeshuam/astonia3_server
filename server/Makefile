all: server runtime/generic/base.dll runtime/generic/lostcon.dll \
runtime/generic/merchant.dll runtime/generic/simple_baddy.dll \
zones/generic/weapons.itm runtime/generic/bank.dll \
zones/generic/armor.itm chatserver runtime/1/gwendylon.dll \
runtime/2/area2.dll runtime/3/area3.dll runtime/generic/book.dll \
runtime/generic/transport.dll runtime/generic/clanmaster.dll \
runtime/generic/pents.dll \
runtime/generic/alchemy.dll \
runtime/3/gatekeeper.dll runtime/6/edemon.dll \
runtime/3/military.dll runtime/8/fdemon.dll \
update_server runtime/10/ice.dll runtime/11/palace.dll \
runtime/generic/mine.dll runtime/3/arena.dll \
runtime/13/dungeon.dll runtime/14/random.dll \
runtime/15/swamp.dll runtime/generic/professor.dll \
runtime/16/forest.dll runtime/17/two.dll \
runtime/18/bones.dll runtime/19/nomad.dll \
runtime/20/lq.dll runtime/22/lab1.dll \
runtime/22/lab2.dll runtime/23/strategy.dll runtime/22/lab3.dll \
runtime/22/lab4.dll runtime/22/lab5.dll \
runtime/19/saltmine.dll runtime/5/sewers.dll \
runtime/generic/sidestory.dll runtime/25/warped.dll \
runtime/1/shrike.dll runtime/26/staffer.dll \
runtime/29/staffer2.dll runtime/28/staffer3.dll \
runtime/31/warrmines.dll runtime/36/caligar.dll \
runtime/32/missions.dll runtime/generic/clubmaster.dll \
runtime/33/tunnel.dll runtime/34/teufel.dll \
runtime/37/arkhata.dll create_account create_character

CC=clang++
DEBUG=-g
CFLAGS=-Wall -Wshadow $(DEBUG) -DSTAFF -Wno-invalid-source-encoding -Wno-format-security
LDFLAGS=-O $(DEBUG) -L/usr/lib/mysql
LDRFLAGS=-O $(DEBUG) -rdynamic -L/usr/lib/mysql
DDFLAGS=-O $(DEBUG) -fPIC -shared
DFLAGS=$(CFLAGS) -fPIC
DATE=`date +%y%m%d%H`

OBJS=.obj/server.o .obj/io.o .obj/libload.o .obj/tool.o .obj/sleep.o \
.obj/log.o .obj/create.o .obj/notify.o .obj/skill.o .obj/do.o \
.obj/act.o .obj/player.o .obj/rdtsc.o .obj/los.o .obj/light.o \
.obj/map.o .obj/path.o .obj/error.o .obj/talk.o .obj/drdata.o \
.obj/death.o .obj/database.o .obj/see.o .obj/drvlib.o .obj/timer.o \
.obj/expire.o .obj/effect.o .obj/command.o .obj/date.o \
.obj/container.o .obj/store.o .obj/mem.o .obj/sector.o .obj/chat.o \
.obj/statistics.o .obj/mail.o .obj/player_driver.o .obj/clan.o \
.obj/lookup.o .obj/area.o .obj/task.o .obj/punish.o .obj/depot.o \
.obj/prof.o .obj/motd.o .obj/ignore.o .obj/tell.o .obj/clanlog.o \
.obj/respawn.o .obj/poison.o .obj/swear.o .obj/lab.o \
.obj/consistency.o .obj/btrace.o .obj/club.o .obj/teufel_pk.o \
.obj/questlog.o .obj/badip.o


# ------- Server -----

server:	$(OBJS)
	$(CC) $(LDRFLAGS) -o server $(OBJS) -lmysqlclient -lm -lz -ldl -lpthread

.obj/server.o:		server.cc server.h client.h player.h io.h notify.h libload.h tool.h sleep.h log.h create.h direction.h act.h los.h path.h timer.h effect.h database.h map.h date.h container.h store.h mem.h sector.h chat.h
	$(CC) $(CFLAGS) -o .obj/server.o -c server.cc

.obj/io.o:		io.cc server.h client.h player.h log.h mem.h io.h
	$(CC) $(CFLAGS) -o $*.o -c $<

.obj/libload.o:		libload.cc server.h tool.h log.h notify.h player.h mem.h libload.h
	$(CC) $(CFLAGS) -o .obj/libload.o -c libload.cc

.obj/tool.o:		tool.cc server.h log.h talk.h direction.h create.h skill.h player.h tool.h
	$(CC) $(CFLAGS) -o .obj/tool.o -c tool.cc
	
.obj/questlog.o:	questlog.cc server.h log.h talk.h direction.h create.h skill.h player.h tool.h
	$(CC) $(CFLAGS) -o .obj/questlog.o -c questlog.cc

.obj/depot.o:		depot.cc server.h log.h talk.h direction.h create.h skill.h player.h depot.h
	$(CC) $(CFLAGS) -o .obj/depot.o -c depot.cc

.obj/sleep.o:		sleep.cc server.h log.h sleep.h
	$(CC) $(CFLAGS) -o .obj/sleep.o -c sleep.cc

.obj/log.o:		log.cc log.h server.h
	$(CC) $(CFLAGS) -o .obj/log.o -c log.cc

.obj/create.o:		create.cc server.h tool.h log.h skill.h light.h player.h direction.h timer.h mem.h notify.h libload.h sector.h create.h balance.h
	$(CC) $(CFLAGS) -o .obj/create.o -c create.cc

.obj/notify.o:		notify.cc server.h log.h see.h mem.h sector.h notify.h create.h
	$(CC) $(CFLAGS) -o .obj/notify.o -c notify.cc
	
.obj/teufel_pk.o:	teufel_pk.cc server.h log.h see.h mem.h sector.h notify.h create.h
	$(CC) $(CFLAGS) -o .obj/teufel_pk.o -c teufel_pk.cc

.obj/skill.o:		skill.cc server.h create.h database.h log.h skill.h
	$(CC) $(CFLAGS) -o .obj/skill.o -c skill.cc

.obj/do.o:		do.cc server.h tool.h direction.h act.h error.h create.h drvlib.h talk.h see.h container.h log.h notify.h libload.h database.h spell.h effect.h map.h do.h
	$(CC) $(CFLAGS) -o .obj/do.o -c do.cc

.obj/act.o:		act.cc server.h log.h direction.h notify.h libload.h light.h tool.h map.h death.h create.h effect.h timer.h talk.h drvlib.h database.h drdata.h do.h see.h spell.h container.h path.h sector.h act.h balance.h
	$(CC) $(CFLAGS) -o .obj/act.o -c act.cc	

.obj/player.o:		player.cc mail.h server.h do.h log.h io.h client.h map.h database.h create.h see.h notify.h player.h los.h effect.h talk.h drvlib.h direction.h drdata.h act.h command.h container.h date.h skill.h store.h libload.h death.h tool.h sector.h
	$(CC) $(CFLAGS) -o .obj/player.o -c player.cc

.obj/player_driver.o:	player_driver.cc server.h do.h log.h io.h client.h map.h database.h create.h see.h notify.h player_driver.h los.h effect.h talk.h drvlib.h direction.h drdata.h act.h command.h container.h date.h skill.h store.h libload.h death.h tool.h sector.h
	$(CC) $(CFLAGS) -o .obj/player_driver.o -c player_driver.cc

.obj/rdtsc.o:		rdtsc.S
	$(CC) $(CFLAGS) -o .obj/rdtsc.o -c rdtsc.S

.obj/los.o:		los.cc server.h log.h light.h mem.h sector.h los.h
	$(CC) $(CFLAGS) -o .obj/los.o -c los.cc

.obj/consistency.o:		consistency.cc server.h log.h light.h mem.h sector.h consistency.h
	$(CC) $(CFLAGS) -o .obj/consistency.o -c consistency.cc

.obj/light.o:		light.cc server.h log.h los.h sector.h light.h
	$(CC) $(CFLAGS) -o .obj/light.o -c light.cc

.obj/map.o:		map.cc server.h light.h log.h create.h expire.h effect.h drdata.h notify.h libload.h container.h sector.h map.h
	$(CC) $(CFLAGS) -o .obj/map.o -c map.cc

.obj/path.o:		path.cc server.h direction.h log.h mem.h path.h
	$(CC) $(CFLAGS) -o .obj/path.o -c path.cc

.obj/prof.o:		prof.cc server.h talk.h tool.h log.h mem.h prof.h
	$(CC) $(CFLAGS) -o .obj/prof.o -c prof.cc

.obj/motd.o:		motd.cc server.h talk.h tool.h log.h mem.h motd.h
	$(CC) $(CFLAGS) -o .obj/motd.o -c motd.cc

.obj/error.o:		error.cc error.h
	$(CC) $(CFLAGS) -o .obj/error.o -c error.cc

.obj/talk.o:		talk.cc server.h notify.h log.h player.h see.h path.h mem.h sector.h talk.h
	$(CC) $(CFLAGS) -o .obj/talk.o -c talk.cc

.obj/drdata.o:		drdata.cc server.h log.h mem.h drdata.h
	$(CC) $(CFLAGS) -o .obj/drdata.o -c drdata.cc

.obj/death.o:		death.cc server.h log.h timer.h map.h notify.h create.h drdata.h libload.h direction.h error.h act.h talk.h expire.h effect.h database.h tool.h container.h player.h sector.h death.h
	$(CC) $(CFLAGS) -o .obj/death.o -c death.cc

.obj/database.o:	database.cc server.h log.h create.h player.h sleep.h tool.h drdata.h drvlib.h timer.h direction.h map.h mem.h database.h misc_ppd.h badip.h
	$(CC) $(CFLAGS) -o .obj/database.o -c database.cc

.obj/lookup.o:	lookup.cc server.h lookup.h log.h create.h player.h sleep.h tool.h drdata.h drvlib.h timer.h direction.h map.h mem.h database.h
	$(CC) $(CFLAGS) -o .obj/lookup.o -c lookup.cc

.obj/see.o:		see.cc server.h los.h log.h date.h see.h
	$(CC) $(CFLAGS) -o .obj/see.o -c see.cc

.obj/drvlib.o:		drvlib.cc server.h drdata.h direction.h error.h notify.h path.h do.h see.h talk.h map.h container.h timer.h libload.h spell.h tool.h effect.h create.h drvlib.h sector.h
	$(CC) $(CFLAGS) -o .obj/drvlib.o -c drvlib.cc

.obj/timer.o:		timer.cc server.h log.h mem.h timer.h
	$(CC) $(CFLAGS) -o .obj/timer.o -c timer.cc

.obj/expire.o:		expire.cc server.h log.h timer.h map.h create.h container.h expire.h
	$(CC) $(CFLAGS) -o .obj/expire.o -c expire.cc

.obj/effect.o:		effect.cc server.h log.h notify.h death.h light.h tool.h spell.h los.h mem.h sector.h effect.h
	$(CC) $(CFLAGS) -o .obj/effect.o -c effect.cc

.obj/command.o:		command.cc server.h talk.h log.h tool.h skill.h database.h date.h do.h map.h command.h chat.h misc_ppd.h
	$(CC) $(CFLAGS) -o .obj/command.o -c command.cc

.obj/date.o:		date.cc server.h talk.h date.h
	$(CC) $(CFLAGS) -o .obj/date.o -c date.cc

.obj/container.o:	container.cc server.h log.h create.h mem.h container.h
	$(CC) $(CFLAGS) -o .obj/container.o -c container.cc

.obj/store.o:	store.cc server.h log.h error.h create.h tool.h talk.h mem.h store.h
	$(CC) $(CFLAGS) -o .obj/store.o -c store.cc

.obj/mem.o:		mem.cc log.h mem.h
	$(CC) $(CFLAGS) -DDEBUG -o .obj/mem.o -c mem.cc

.obj/sector.o:		sector.cc server.h mem.h log.h sector.h tool.h
	$(CC) $(CFLAGS) -o .obj/sector.o -c sector.cc

.obj/chat.o:		chat.cc chat.h log.h talk.h server.h mem.h
	$(CC) $(CFLAGS) -o .obj/chat.o -c chat.cc

.obj/statistics.o:	statistics.cc statistics.h server.h mem.h drdata.h
	$(CC) $(CFLAGS) -o .obj/statistics.o -c statistics.cc

.obj/mail.o:		mail.cc mail.h
	$(CC) $(CFLAGS) -o .obj/mail.o -c mail.cc

.obj/clan.o:		clan.cc server.h
	$(CC) $(CFLAGS) -o .obj/clan.o -c clan.cc

.obj/club.o:		club.cc server.h
	$(CC) $(CFLAGS) -o .obj/club.o -c club.cc

.obj/area.o:		area.cc area.h log.h talk.h server.h mem.h
	$(CC) $(CFLAGS) -o .obj/area.o -c area.cc

.obj/task.o:		task.cc task.h log.h talk.h server.h mem.h
	$(CC) $(CFLAGS) -o .obj/task.o -c task.cc

.obj/punish.o:		punish.cc punish.h log.h talk.h server.h mem.h
	$(CC) $(CFLAGS) -o .obj/punish.o -c punish.cc

.obj/ignore.o:		ignore.cc ignore.h log.h talk.h server.h mem.h
	$(CC) $(CFLAGS) -o .obj/ignore.o -c ignore.cc

.obj/tell.o:		tell.cc tell.h log.h talk.h server.h mem.h
	$(CC) $(CFLAGS) -o .obj/tell.o -c tell.cc

.obj/clanlog.o:		clanlog.cc clanlog.h log.h talk.h server.h mem.h
	$(CC) $(CFLAGS) -o .obj/clanlog.o -c clanlog.cc

.obj/respawn.o:		respawn.cc respawn.h log.h talk.h server.h mem.h
	$(CC) $(CFLAGS) -o .obj/respawn.o -c respawn.cc

.obj/poison.o:		poison.cc poison.h log.h talk.h server.h mem.h
	$(CC) $(CFLAGS) -o .obj/poison.o -c poison.cc

.obj/swear.o:		swear.cc swear.h log.h talk.h server.h mem.h
	$(CC) $(CFLAGS) -o .obj/swear.o -c swear.cc

.obj/lab.o:		lab.cc lab.h log.h talk.h server.h mem.h
	$(CC) $(CFLAGS) -o .obj/lab.o -c lab.cc

.obj/btrace.o:		btrace.cc btrace.h
	$(CC) $(CFLAGS) -o .obj/btrace.o -c btrace.cc
	
.obj/badip.o:		badip.cc badip.h log.h talk.h server.h mem.h
	$(CC) $(CFLAGS) -o .obj/badip.o -c badip.cc

# ------- DLLs -------

runtime/generic/base.dll:	.obj/base.o
	$(CC) $(DDFLAGS) -o base.tmp .obj/base.o
	mv base.tmp runtime/generic/base.dll

.obj/base.o:		base.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h map.h create.h container.h tool.h spell.h effect.h light.h los.h
	$(CC) $(DFLAGS) -o .obj/base.o -c base.cc

runtime/generic/sidestory.dll:	.obj/sidestory.o
	$(CC) $(DDFLAGS) -o sidestory.tmp .obj/sidestory.o
	mv sidestory.tmp runtime/generic/sidestory.dll

.obj/sidestory.o:		sidestory.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h map.h create.h container.h tool.h spell.h effect.h light.h los.h
	$(CC) $(DFLAGS) -o .obj/sidestory.o -c sidestory.cc

runtime/generic/pents.dll:	.obj/pents.o
	$(CC) $(DDFLAGS) -o pents.tmp .obj/pents.o
	mv pents.tmp runtime/generic/pents.dll

.obj/pents.o:		pents.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h map.h create.h container.h tool.h spell.h effect.h light.h los.h
	$(CC) $(DFLAGS) -o .obj/pents.o -c pents.cc

runtime/generic/professor.dll:	.obj/professor.o
	$(CC) $(DDFLAGS) -o professor.tmp .obj/professor.o
	mv professor.tmp runtime/generic/professor.dll

.obj/professor.o:		professor.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h map.h create.h container.h tool.h spell.h effect.h light.h los.h
	$(CC) $(DFLAGS) -o .obj/professor.o -c professor.cc

runtime/generic/bank.dll:	.obj/bank.o
	$(CC) $(DDFLAGS) -o bank.tmp .obj/bank.o
	mv bank.tmp runtime/generic/bank.dll

.obj/bank.o:		bank.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h map.h create.h container.h tool.h spell.h effect.h light.h los.h
	$(CC) $(DFLAGS) -o .obj/bank.o -c bank.cc

runtime/generic/alchemy.dll:	.obj/alchemy.o
	$(CC) $(DDFLAGS) -o alchemy.tmp .obj/alchemy.o
	mv alchemy.tmp runtime/generic/alchemy.dll

.obj/alchemy.o:		alchemy.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h map.h create.h container.h tool.h spell.h effect.h light.h los.h
	$(CC) $(DFLAGS) -o .obj/alchemy.o -c alchemy.cc

runtime/generic/book.dll:	.obj/book.o
	$(CC) $(DDFLAGS) -o book.tmp .obj/book.o
	mv book.tmp runtime/generic/book.dll

.obj/book.o:		book.cc server.h book.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h map.h create.h container.h tool.h spell.h effect.h light.h los.h
	$(CC) $(DFLAGS) -o .obj/book.o -c book.cc

runtime/generic/transport.dll:	.obj/transport.o
	$(CC) $(DDFLAGS) -o transport.tmp .obj/transport.o
	mv transport.tmp runtime/generic/transport.dll

.obj/transport.o:		transport.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h map.h create.h container.h tool.h spell.h effect.h light.h los.h
	$(CC) $(DFLAGS) -o .obj/transport.o -c transport.cc

runtime/generic/clanmaster.dll:	.obj/clanmaster.o
	$(CC) $(DDFLAGS) -o clanmaster.tmp .obj/clanmaster.o
	mv clanmaster.tmp runtime/generic/clanmaster.dll

.obj/clanmaster.o:		clanmaster.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h map.h create.h container.h tool.h spell.h effect.h light.h los.h
	$(CC) $(DFLAGS) -o .obj/clanmaster.o -c clanmaster.cc

runtime/generic/clubmaster.dll:	.obj/clubmaster.o
	$(CC) $(DDFLAGS) -o clubmaster.tmp .obj/clubmaster.o
	mv clubmaster.tmp runtime/generic/clubmaster.dll

.obj/clubmaster.o:		clubmaster.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h map.h create.h container.h tool.h spell.h effect.h light.h los.h
	$(CC) $(DFLAGS) -o .obj/clubmaster.o -c clubmaster.cc

runtime/generic/lostcon.dll:	.obj/lostcon.o
	$(CC) $(DDFLAGS) -o lostcon.tmp .obj/lostcon.o
	mv lostcon.tmp runtime/generic/lostcon.dll

.obj/lostcon.o:		lostcon.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h player.h
	$(CC) $(DFLAGS) -o .obj/lostcon.o -c lostcon.cc

runtime/generic/merchant.dll:	.obj/merchant.o
	$(CC) $(DDFLAGS) -o merchant.tmp .obj/merchant.o
	mv merchant.tmp runtime/generic/merchant.dll

.obj/merchant.o:	merchant.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h
	$(CC) $(DFLAGS) -o .obj/merchant.o -c merchant.cc

runtime/generic/simple_baddy.dll:	.obj/simple_baddy.o
	$(CC) $(DDFLAGS) -o simple_baddy.tmp .obj/simple_baddy.o
	mv simple_baddy.tmp runtime/generic/simple_baddy.dll

.obj/simple_baddy.o:		simple_baddy.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h
	$(CC) $(DFLAGS) -o .obj/simple_baddy.o -c simple_baddy.cc

runtime/1/gwendylon.dll:	.obj/gwendylon.o
	$(CC) $(DDFLAGS) -o gwendylon.tmp .obj/gwendylon.o
	mv gwendylon.tmp runtime/1/gwendylon.dll

.obj/gwendylon.o:	gwendylon.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/gwendylon.o -c gwendylon.cc

runtime/1/shrike.dll:	.obj/shrike.o
	$(CC) $(DDFLAGS) -o shrike.tmp .obj/shrike.o
	mv shrike.tmp runtime/1/shrike.dll

.obj/shrike.o:	shrike.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/shrike.o -c shrike.cc

runtime/2/area2.dll:	.obj/area2.o
	$(CC) $(DDFLAGS) -o area2.tmp .obj/area2.o
	mv area2.tmp runtime/2/area2.dll

.obj/area2.o:	area2.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/area2.o -c area2.cc

runtime/3/area3.dll:	.obj/area3.o
	$(CC) $(DDFLAGS) -o area3.tmp .obj/area3.o
	mv area3.tmp runtime/3/area3.dll

.obj/area3.o:	area3.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/area3.o -c area3.cc
	
runtime/37/arkhata.dll:	.obj/arkhata.o
	$(CC) $(DDFLAGS) -o arkhata.tmp .obj/arkhata.o
	mv arkhata.tmp runtime/37/arkhata.dll

.obj/arkhata.o:	arkhata.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/arkhata.o -c arkhata.cc

runtime/22/lab2.dll:	.obj/lab2.o
	$(CC) $(DDFLAGS) -o lab2.tmp .obj/lab2.o
	mv lab2.tmp runtime/22/lab2.dll

.obj/lab2.o:	lab2.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/lab2.o -c lab2.cc

runtime/22/lab3.dll:	.obj/lab3.o
	$(CC) $(DDFLAGS) -o lab3.tmp .obj/lab3.o
	mv lab3.tmp runtime/22/lab3.dll

.obj/lab3.o:	lab3.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/lab3.o -c lab3.cc

runtime/22/lab4.dll:	.obj/lab4.o
	$(CC) $(DDFLAGS) -o lab4.tmp .obj/lab4.o
	mv lab4.tmp runtime/22/lab4.dll

.obj/lab4.o:	lab4.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/lab4.o -c lab4.cc

runtime/22/lab5.dll:	.obj/lab5.o
	$(CC) $(DDFLAGS) -o lab5.tmp .obj/lab5.o
	mv lab5.tmp runtime/22/lab5.dll

.obj/lab5.o:	lab5.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/lab5.o -c lab5.cc


runtime/3/arena.dll:	.obj/arena.o
	$(CC) $(DDFLAGS) -o arena.tmp .obj/arena.o
	mv arena.tmp runtime/3/arena.dll

.obj/arena.o:	arena.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/arena.o -c arena.cc

runtime/3/gatekeeper.dll:	.obj/gatekeeper.o
	$(CC) $(DDFLAGS) -o gatekeeper.tmp .obj/gatekeeper.o
	mv gatekeeper.tmp runtime/3/gatekeeper.dll

.obj/gatekeeper.o:	gatekeeper.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/gatekeeper.o -c gatekeeper.cc

runtime/3/military.dll:	.obj/military.o
	$(CC) $(DDFLAGS) -o military.tmp .obj/military.o
	cp military.tmp military.tmp2
	mv military.tmp runtime/3/military.dll
	mv military.tmp2 runtime/29/military.dll

.obj/military.o:	military.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/military.o -c military.cc

runtime/6/edemon.dll:	.obj/edemon.o
	$(CC) $(DDFLAGS) -o edemon.tmp .obj/edemon.o
	mv edemon.tmp runtime/6/edemon.dll

.obj/edemon.o:	edemon.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/edemon.o -c edemon.cc

runtime/5/sewers.dll:	.obj/sewers.o
	$(CC) $(DDFLAGS) -o sewers.tmp .obj/sewers.o
	mv sewers.tmp runtime/5/sewers.dll

.obj/sewers.o:	sewers.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/sewers.o -c sewers.cc

runtime/8/fdemon.dll:	.obj/fdemon.o
	$(CC) $(DDFLAGS) -o fdemon.tmp .obj/fdemon.o
	mv fdemon.tmp runtime/8/fdemon.dll

.obj/fdemon.o:	fdemon.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/fdemon.o -c fdemon.cc

runtime/10/ice.dll:	.obj/ice.o
	$(CC) $(DDFLAGS) -o ice.tmp .obj/ice.o
	mv ice.tmp runtime/10/ice.dll

.obj/ice.o:	ice.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/ice.o -c ice.cc

runtime/11/palace.dll:	.obj/palace.o
	$(CC) $(DDFLAGS) -o palace.tmp .obj/palace.o
	mv palace.tmp runtime/11/palace.dll

.obj/palace.o:	palace.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/palace.o -c palace.cc

runtime/13/dungeon.dll:	.obj/dungeon.o
	$(CC) $(DDFLAGS) -o dungeon.tmp .obj/dungeon.o
	mv dungeon.tmp runtime/13/dungeon.dll

.obj/dungeon.o:	dungeon.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/dungeon.o -c dungeon.cc

runtime/14/random.dll:	.obj/random.o
	$(CC) $(DDFLAGS) -o random.tmp .obj/random.o
	mv random.tmp runtime/14/random.dll

.obj/random.o:	random.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/random.o -c random.cc

runtime/15/swamp.dll:	.obj/swamp.o
	$(CC) $(DDFLAGS) -o swamp.tmp .obj/swamp.o
	mv swamp.tmp runtime/15/swamp.dll

.obj/swamp.o:	swamp.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/swamp.o -c swamp.cc

runtime/16/forest.dll:	.obj/forest.o
	$(CC) $(DDFLAGS) -o forest.tmp .obj/forest.o
	mv forest.tmp runtime/16/forest.dll

.obj/forest.o:	forest.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/forest.o -c forest.cc

runtime/17/two.dll:	.obj/two.o
	$(CC) $(DDFLAGS) -o two.tmp .obj/two.o
	mv two.tmp runtime/17/two.dll

.obj/two.o:	two.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/two.o -c two.cc

runtime/18/bones.dll:	.obj/bones.o
	$(CC) $(DDFLAGS) -o bones.tmp .obj/bones.o
	mv bones.tmp runtime/18/bones.dll

.obj/bones.o:	bones.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/bones.o -c bones.cc

runtime/19/nomad.dll:	.obj/nomad.o
	$(CC) $(DDFLAGS) -o nomad.tmp .obj/nomad.o
	mv nomad.tmp runtime/19/nomad.dll

.obj/nomad.o:	nomad.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/nomad.o -c nomad.cc

runtime/19/saltmine.dll:	.obj/saltmine.o
	$(CC) $(DDFLAGS) -o saltmine.tmp .obj/saltmine.o
	mv saltmine.tmp runtime/19/saltmine.dll

.obj/saltmine.o:	saltmine.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/saltmine.o -c saltmine.cc

runtime/26/staffer.dll:	.obj/staffer.o
	$(CC) $(DDFLAGS) -o staffer.tmp .obj/staffer.o
	mv staffer.tmp runtime/26/staffer.dll

.obj/staffer.o:	staffer.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/staffer.o -c staffer.cc

runtime/29/staffer2.dll:	.obj/staffer2.o
	$(CC) $(DDFLAGS) -o staffer2.tmp .obj/staffer2.o
	mv staffer2.tmp runtime/29/staffer2.dll

.obj/staffer2.o:	staffer2.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/staffer2.o -c staffer2.cc

runtime/28/staffer3.dll:	.obj/staffer3.o
	$(CC) $(DDFLAGS) -o staffer3.tmp .obj/staffer3.o
	mv staffer3.tmp runtime/28/staffer3.dll

.obj/staffer3.o:	staffer3.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/staffer3.o -c staffer3.cc

runtime/25/warped.dll:	.obj/warped.o
	$(CC) $(DDFLAGS) -o warped.tmp .obj/warped.o
	mv warped.tmp runtime/25/warped.dll

.obj/warped.o:	warped.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/warped.o -c warped.cc

runtime/20/lq.dll:	.obj/lq.o
	$(CC) $(DDFLAGS) -o lq.tmp .obj/lq.o
	cp lq.tmp lq.tmpx
	mv lq.tmpx runtime/35/lq.dll
	mv lq.tmp runtime/20/lq.dll

.obj/lq.o:	lq.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/lq.o -c lq.cc

runtime/generic/mine.dll:	.obj/mine.o
	$(CC) $(DDFLAGS) -o mine.tmp .obj/mine.o
	mv mine.tmp runtime/generic/mine.dll

.obj/mine.o:	mine.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/mine.o -c mine.cc

runtime/22/lab1.dll:		.obj/lab1.o
	$(CC) $(DDFLAGS) -o lab1.tmp .obj/lab1.o
	mv lab1.tmp runtime/22/lab1.dll

.obj/lab1.o:	lab1.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/lab1.o -c lab1.cc

runtime/23/strategy.dll: 	.obj/strategy.o
	$(CC) $(DDFLAGS) -o strategy.tmp .obj/strategy.o
	cp strategy.tmp strategy2.tmp
	mv strategy.tmp runtime/23/strategy.dll
	mv strategy2.tmp runtime/24/strategy.dll

.obj/strategy.o:	strategy.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/strategy.o -c strategy.cc

runtime/33/tunnel.dll: 	.obj/tunnel.o
	$(CC) $(DDFLAGS) -o tunnel.tmp .obj/tunnel.o
	mv tunnel.tmp runtime/33/tunnel.dll

.obj/tunnel.o:	tunnel.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/tunnel.o -c tunnel.cc

runtime/31/warrmines.dll: .obj/warrmines.o
	$(CC) $(DDFLAGS) -o warrmines.tmp .obj/warrmines.o
	mv warrmines.tmp runtime/31/warrmines.dll

.obj/warrmines.o:	warrmines.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/warrmines.o -c warrmines.cc

runtime/32/missions.dll: .obj/missions.o
	$(CC) $(DDFLAGS) -o missions.tmp .obj/missions.o
	mv missions.tmp runtime/32/missions.dll

.obj/missions.o:	missions.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h mission_ppd.h
	$(CC) $(DFLAGS) -o .obj/missions.o -c missions.cc
	
runtime/34/teufel.dll: .obj/teufel.o
	$(CC) $(DDFLAGS) -o teufel.tmp .obj/teufel.o
	mv teufel.tmp runtime/34/teufel.dll

.obj/teufel.o:	teufel.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h mission_ppd.h
	$(CC) $(DFLAGS) -o .obj/teufel.o -c teufel.cc	
	
runtime/36/caligar.dll: .obj/caligar.o
	$(CC) $(DDFLAGS) -o caligar.tmp .obj/caligar.o
	mv caligar.tmp runtime/36/caligar.dll

.obj/caligar.o:	caligar.cc server.h log.h notify.h do.h direction.h path.h error.h drdata.h see.h drvlib.h death.h effect.h tool.h store.h area1.h
	$(CC) $(DFLAGS) -o .obj/caligar.o -c caligar.cc

update_server:	.obj/update_server.o
	$(CC) $(LDFLAGS) -lm -o update_server .obj/update_server.o

.obj/update_server.o:	update_server.cc
	$(CC) $(CFLAGS) -o .obj/update_server.o -c update_server.cc

zones/generic/weapons.itm:	create_weapons
	./create_weapons >zones/generic/weapons.itm

create_weapons:	.obj/create_weapons.o
	$(CC) $(LDFLAGS) -o create_weapons .obj/create_weapons.o

.obj/create_weapons.o:	create_weapons.cc
	$(CC) $(CFLAGS) -o .obj/create_weapons.o -c create_weapons.cc

zones/generic/armor.itm:	create_armor
	./create_armor >zones/generic/armor.itm

create_armor:		.obj/create_armor.o
	$(CC) $(LDFLAGS) -o create_armor .obj/create_armor.o

.obj/create_armor.o:	create_armor.cc
	$(CC) $(CFLAGS) -o .obj/create_armor.o -c create_armor.cc

chatserver:		.obj/chatserver.o
	$(CC) $(LDFLAGS) -o chatserver .obj/chatserver.o

.obj/chatserver.o:	chatserver.cc
	$(CC) $(CFLAGS) -o .obj/chatserver.o -c chatserver.cc
	
create_account:		create_account.cc
	$(CC) $(CFLAGS) $(LDFLAGS) -o create_account create_account.cc -lmysqlclient
	
create_character:	create_character.cc
	$(CC) $(CFLAGS) $(LDFLAGS) -o create_character create_character.cc -lmysqlclient


# ------- Helper -----

clean:
	rm -rf server .obj/*.o *~ zones/*/*~ runtime/*/* chatserver update_server create_weapons create_armor create_account create_character
	
