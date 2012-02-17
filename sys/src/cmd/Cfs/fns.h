extern u64int	addrofref(u64int refaddr, int idx);
extern void	changed(Memblk *b);
extern void	clean(Memblk *b);
extern Memblk*	dballoc(uint type);
extern void	dbclear(u64int addr, int type);
extern u64int	dbdecref(u64int addr);
extern Memblk*	dbdup(Memblk *b);
extern Memblk*	dbget(uint type, u64int addr);
extern u64int	dbgetref(u64int addr);
extern void	dbincref(u64int addr);
extern long	dbread(Memblk *b);
extern void	dbsetref(u64int addr, u64int ref);
extern long	dbwrite(Memblk *b);
extern void	delchild(Memblk *d, Child *c);
extern Memblk*	dfcreate(Memblk *parent, char *name, char *uid, ulong mode);
extern void	dffreeze(Memblk *f);
extern void	dflink(Memblk *d, Memblk *f);
extern void	dfloaddir(Memblk *d, int locked);
extern Memblk*	dfmelt(Memblk *f);
extern ulong	dfpread(Memblk *f, void *a, ulong count, uvlong off);
extern ulong	dfpwrite(Memblk *f, void *a, ulong count, uvlong off);
extern long	dfrattr(Memblk *f, char *name, void *val, long count);
extern Blksl	dfreadblk(Memblk *f, ulong len, uvlong off);
extern int	dfreclaim(Memblk *f);
extern Blksl	dfslice(Memblk *f, ulong len, uvlong off, int iswr);
extern void	dfsync(Memblk *f);
extern void	dfunlink(Memblk *d, Memblk *f);
extern Memblk*	dfwalk(Memblk *d, char *name, int iswr);
extern long	dfwattr(Memblk *f, char *name, void *val, long nval);
extern Blksl	dfwriteblk(Memblk *f, ulong count, uvlong off);
extern void	disktohost(Memblk *b);
extern ulong	embedattrsz(Memblk *f);
extern void	fsdump(void);
extern void	fsfmt(char *dev);
extern Memblk*	fsfreeze(void);
extern void	fsopen(char *dev);
extern void	fsreclaim(void);
extern void	fssync(void);
extern void	gmeta(Fmeta *meta, void *buf, ulong nbuf);
extern Memblk*	hosttodisk(Memblk *b);
extern void	isdir(Memblk *d);
extern int	iserror(char *s);
extern void	isfile(Memblk *d);
extern void	isloaded(Memblk *d);
extern void	ismelted(Memblk *b);
extern void	isnotdir(Memblk *d);
extern void	isrlocked(Memblk *b);
extern void	iswlocked(Memblk *b);
extern void	main(int argc, char *argv[]);
extern void	main(int argc, char *argv[]);
extern void	main(int, char *argv[]);
extern Memblk*	mballoc(u64int addr);
extern Memblk*	mbdup(Memblk *b);
extern int	mbfmt(Fmt *fmt);
extern Memblk*	mbget(u64int addr);
extern Memblk*	mbhash(Memblk *b);
extern void	mbput(Memblk *b);
extern void	mbunhash(Memblk *b);
extern void	meltedref(Memblk *rb);
extern u64int	newblkaddr(void);
extern uvlong	now(void);
extern void	okaddr(u64int addr);
extern ulong	pmeta(void *buf, ulong nbuf, Fmeta *meta);
extern u64int	refaddr(u64int addr, int *idx);
extern Memblk*	walkpath(Memblk *f, char *elems[], int nelems);