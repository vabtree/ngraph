# Modified for windows platform
.SUFFIXES: .c .cc .o


.c.o:
	$(CC) $(CFLAGS) -c $<

.cc.o:
	$(CCC) $(CFLAGS) -c $<


EXECS = gprune g2degree gcomponents gcluster_coeff mtx2g v2t \
        gremove_v  g2udot g2dot mtx2g gsubgraph_v g2v g2tgf \
        gpagerank k2t gcompact gunion gminus gintersect  \
        mi0_2mi g2ug g2scc gtranspose ifreq g2weak g2degfreq \
        g2Pmetric g2Pmetric_level g2Pmatrix  gecho g2Ptree freq sg2g0 \
        gbigcomponent gneighbors_v t2v g2rand g2prand \
        g2lrand grepeated_edges gg_erdos word2index \
        gcoarsen g2alignment gsize vmap vimap g2giant_v \
        process_amazon

OUTPUT_DIR = E:/Lib/ngraph_4_2/bin

all: $(EXECS) 




CC = icc
CCC = icc
OPTFLAGS = -O3 
WFLAGS =  

LDFLAGS = 
#IFLAGS =   -I$(NGRAPH)

CC = gcc
CCC = g++
OPTFLAGS = -O3 -fomit-frame-pointer -funroll-loops -fforce-mem -fforce-addr -fexpensive-optimizations
OPTFLAGS = -O3 
OPTFLAGS = -O6 -funroll-all-loops
OPTFLAGS = -O6 -funroll-loops
WFLAGS =  -Wall -pedantic  -ansi

DFLAGS = -g
DFLAGS = 

CFLAGS =  $(WFLAGS) $(IFLAGS) $(OPTFLAGS) $(DLFAGS)
OBJS =  

process_amazon : process_amazon.cc
	$(CCC) $(CFLAGS) -o process_amazon process_amazon.cc $(OBJS) $(LDFLAGS) 
	

g2giant_v : g2giant_v.cc
	$(CCC) $(CFLAGS) -o g2giant_v g2giant_v.cc $(OBJS) $(LDFLAGS) 
	

g2alignment : g2alignment.cc
	$(CCC) $(CFLAGS) -o g2alignment g2alignment.cc  $(OBJS) $(LDFLAGS) 
	

gsize : gsize.cc
	$(CCC) $(CFLAGS) -o gsize gsize.cc  $(OBJS) $(LDFLAGS) 
	


vimap : vimap.cc
	$(CCC) $(CFLAGS) -o vimap vimap.cc  $(OBJS) $(LDFLAGS) 
	


vmap : vmap.cc
	$(CCC) $(CFLAGS) -o vmap vmap.cc  $(OBJS) $(LDFLAGS) 


gcoarsen : gcoarsen.cc
	$(CCC) $(CFLAGS) -o gcoarsen gcoarsen.cc  $(OBJS) $(LDFLAGS) 


word2index : word2index.cc
	$(CCC) $(CFLAGS) -o word2index word2index.cc  $(OBJS) $(LDFLAGS) 


gg_erdos : gg_erdos.cc
	$(CCC) $(CFLAGS) -o gg_erdos gg_erdos.cc  $(OBJS) $(LDFLAGS) 


grepeated_edges : grepeated_edges.cc
	$(CCC) $(CFLAGS) -o grepeated_edges grepeated_edges.cc  $(OBJS) $(LDFLAGS) 


g2lrand : g2lrand.cc
	$(CCC) $(CFLAGS) -o g2lrand g2lrand.cc  $(OBJS) $(LDFLAGS) 


mg2degree : mg2degree.cc
	$(CCC) $(CFLAGS) -o mg2degree mg2degree.cc  $(OBJS) $(LDFLAGS) 


g2prand : g2prand.cc
	$(CCC) $(CFLAGS) -o g2prand g2prand.cc  $(OBJS) $(LDFLAGS) 


g2rand : g2rand.cc
	$(CCC) $(CFLAGS) -o g2rand g2rand.cc  $(OBJS) $(LDFLAGS) 


gneighbors_v : gneighbors_v.cc
	$(CCC) $(CFLAGS) -o gneighbors_v gneighbors_v.cc  $(OBJS) $(LDFLAGS) 


gbigcomponent : gbigcomponent.cc
	$(CCC) $(CFLAGS) -o gbigcomponent gbigcomponent.cc  $(OBJS) $(LDFLAGS) 



t2v : t2v.cc
	$(CCC) $(CFLAGS) -o t2v t2v.cc  $(OBJS) $(LDFLAGS) 


freq : freq.cc
	$(CCC) $(CFLAGS) -o freq freq.cc  $(OBJS) $(LDFLAGS) 


sg2g0 : sg2g0.cc
	$(CCC) $(CFLAGS) -o sg2g0 sg2g0.cc  $(OBJS) $(LDFLAGS) 



gecho : gecho.cc
	$(CCC) $(CFLAGS) -o gecho gecho.cc  $(OBJS) $(LDFLAGS) 


g2Ptree : g2Ptree.cc ngraph.hpp ngraph_weak.hpp \
    ngraph_conductance.hpp
	$(CCC) $(CFLAGS) -o g2Ptree g2Ptree.cc  $(OBJS) $(LDFLAGS) 


g2Pmetric_level : g2Pmetric_level.cc ngraph.hpp ngraph_weak.hpp \
    ngraph_conductance.hpp
	$(CCC) $(CFLAGS) -o g2Pmetric_level g2Pmetric_level.cc  $(OBJS) $(LDFLAGS) 


g2Pmatrix : g2Pmatrix.cc ngraph.hpp ngraph_weak.hpp \
    ngraph_conductance.hpp
	$(CCC) $(CFLAGS) -o g2Pmatrix g2Pmatrix.cc  $(OBJS) $(LDFLAGS) 



g2cug : g2cug.cc
	$(CCC) $(CFLAGS) -o g2cug g2cug.cc  $(OBJS) $(LDFLAGS) 



adj2g : adj2g.cc
	$(CCC) $(CFLAGS) -o adj2g adj2g.cc  $(OBJS) $(LDFLAGS) 


g2Pmetric : g2Pmetric.cc
	$(CCC) $(CFLAGS) -o g2Pmetric g2Pmetric.cc  $(OBJS) $(LDFLAGS) 


g2degfreq : g2degfreq.cc
	$(CCC) $(CFLAGS) -o g2degfreq g2degfreq.cc  $(OBJS) $(LDFLAGS) 


g2weak : g2weak.cc
	$(CCC) $(CFLAGS) -o g2weak g2weak.cc  $(OBJS) $(LDFLAGS) 


ifreq : ifreq.cc
	$(CCC) $(CFLAGS) -o ifreq ifreq.cc  $(OBJS) $(LDFLAGS) 


g2ug : g2ug.cc
	$(CCC) $(CFLAGS) -o g2ug g2ug.cc  $(OBJS) $(LDFLAGS) 


g2scc : g2scc.cc
	$(CCC) $(CFLAGS) -o g2scc g2scc.cc  $(OBJS) $(LDFLAGS) 



gtranspose : gtranspose.cc
	$(CCC) $(CFLAGS) -o gtranspose gtranspose.cc  $(OBJS) $(LDFLAGS) 



mi0_2mi : mi0_2mi.cc 
	$(CCC) $(CFLAGS) -o mi0_2mi mi0_2mi.cc  $(OBJS) $(LDFLAGS) 
	 

gpagerank : gpagerank.cc pagerank.hpp  ngraph.hpp
	$(CCC) $(CFLAGS) -o gpagerank gpagerank.cc  $(OBJS) $(LDFLAGS) 
	 

gintersect : gintersect.cc
	$(CCC) $(CFLAGS) -o gintersect gintersect.cc  $(OBJS) $(LDFLAGS) 
	 

gminus : gminus.cc
	$(CCC) $(CFLAGS) -o gminus gminus.cc  $(OBJS) $(LDFLAGS) 
	 

v2t : v2t.cc
	$(CCC) $(CFLAGS) -o v2t v2t.cc  $(OBJS) $(LDFLAGS) 
	 

gunion : gunion.cc
	$(CCC) $(CFLAGS) -o gunion gunion.cc  $(OBJS) $(LDFLAGS) 
	 

gcompact : gcompact.cc
	$(CCC) $(CFLAGS) -o gcompact gcompact.cc  $(OBJS) $(LDFLAGS) 
	 

k2t : k2t.cc
	$(CCC) $(CFLAGS) -o k2t k2t.cc  $(OBJS) $(LDFLAGS) 
	 

g2v : g2v.cc
	$(CCC) $(CFLAGS) -o g2v g2v.cc  $(OBJS) $(LDFLAGS) 
	 

gcluster_coeff : gcluster_coeff.cc
	$(CCC) $(CFLAGS) -o gcluster_coeff gcluster_coeff.cc  $(OBJS) $(LDFLAGS) 
	 

g2udot : g2udot.cc
	$(CCC) $(CFLAGS) -o g2udot g2udot.cc  $(OBJS) $(LDFLAGS) 
	 

g2dot : g2dot.cc
	$(CCC) $(CFLAGS) -o g2dot g2dot.cc  $(OBJS) $(LDFLAGS) 
	 

g2tgf : g2tgf.cc
	$(CCC) $(CFLAGS) -o g2tgf g2tgf.cc  $(OBJS) $(LDFLAGS) 
	 

g2g0 : g2g0.cc
	$(CCC) $(CFLAGS) -o g2g0 g2g0.cc  $(OBJS) $(LDFLAGS) 
	 



mi2mt : mi2mt.cc
	$(CCC) $(CFLAGS) -o mi2mt mi2mt.cc  $(OBJS) $(LDFLAGS) 
	 



mtx2g : mtx2g.c mmio.c
	$(CC) $(CFLAGS) -o mtx2g mtx2g.c mmio.c $(OBJS) $(LDFLAGS) 
	 

gt2pajek : gt2pajek.cc ngraph.hpp
	$(CCC) $(CFLAGS) -o gt2pajek gt2pajek.cc $(OBJS) $(LDFLAGS) 
	 


gre_v : gre_v.cc ngraph.hpp
	$(CCC) $(CFLAGS) -o gre_v gre_v.cc $(OBJS) $(LDFLAGS) 
	 


gsubgraph_v : gsubgraph_v.cc ngraph.hpp
	$(CCC) $(CFLAGS) -o gsubgraph_v gsubgraph_v.cc $(OBJS) $(LDFLAGS) 
	 

gprune : gprune.cc ngraph.hpp
	$(CCC) $(CFLAGS) -o gprune gprune.cc $(OBJS) $(LDFLAGS) 
	 

vt2 : vt2.cc ngraph.hpp
	$(CCC) $(CFLAGS) -o vt2 vt2.cc $(OBJS) $(LDFLAGS) 
	 

g2degree : g2degree.cc ngraph.hpp
	$(CCC) $(CFLAGS) -o g2degree g2degree.cc $(OBJS) $(LDFLAGS) 
	 

gcomponents : gcomponents.cc ngraph.hpp
	$(CCC) $(CFLAGS) -o gcomponents gcomponents.cc $(OBJS) $(LDFLAGS) 
	 

gnode_attack : gnode_attack.cc ngraph.hpp
	$(CCC) $(CFLAGS) -o gnode_attack gnode_attack.cc $(OBJS) $(LDFLAGS) 
	 

wipe:
	rm *.o  $(EXECS)
	

clean:
	rm *.o  
