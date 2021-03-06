/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface VKLabelNavRoadGraph : NSObject {
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    NSMutableSet *_duplicateTiles;
    NSMutableArray *_intersections;
    NSMutableArray *_junctions;
    } _offRouteJunctionSelectRect;
    NSMutableArray *_offRouteJunctions;
    BOOL _offRouteJunctionsValid;
    NSMutableDictionary *_tileDatasByIndex;
    NSMutableSet *_tiles;
}

@property(retain) NSMutableArray * junctions;

- (id).cxx_construct;
- (id)_findInterTileJunctionForJunction:(id)arg1;
- (void)_findOffRouteJunctions;
- (id)_junctionForRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 atA:(BOOL)arg2 routeOffset:(struct { unsigned int x1; float x2; })arg3 tile:(id)arg4;
- (id)_nextIntersectionForRoad:(id)arg1;
- (void)_updateIntersectionsForDepth:(unsigned int)arg1;
- (void)addPolylineEdge:(id)arg1 atA:(BOOL)arg2 tile:(id)arg3 junctionList:(id)arg4;
- (unsigned int)countReadyJunctionLists;
- (void)dealloc;
- (void)evaluateDualCarriagewayForJunction:(id)arg1 outputJunctionList:(id)arg2;
- (id)initWithJunctions:(id)arg1;
- (id)junctionForRoad:(id)arg1 nearJunction:(BOOL)arg2 crossTileEdge:(BOOL)arg3;
- (id)junctionListForDepth:(unsigned int)arg1;
- (id)junctions;
- (id)nextRoadSegmentForRoad:(id)arg1;
- (id)offRouteGraphJunctionsForViewTransform:(const struct ViewTransform { int (**x1)(); int x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; struct { double x_5_1_1; double x_5_1_2; double x_5_1_3; } x5; float x6; float x7; boolx8; float x9; double x10; struct { double x_11_1_1[4][4]; } x11; struct { double x_12_1_1[4][4]; } x12; struct { double x_13_1_1[4][4]; } x13; id x14; float x15; boolx16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; } x17; struct { double x_18_1_1; double x_18_1_2; double x_18_1_3; } x18; double x19; double x20; struct CGSize { float x_21_1_1; float x_21_1_2; } x21; float x22; struct { BOOL x_23_1_1; double x_23_1_2; double x_23_1_3; double x_23_1_4; double x_23_1_5; } x23; struct { double x_24_1_1; double x_24_1_2; double x_24_1_3; } x24; struct { double x_25_1_1; double x_25_1_2; double x_25_1_3; } x25; }*)arg1 labelContext:(struct LabelContext { id x1; id x2; id x3; id x4; struct ViewTransform {} *x5; int x6; int x7; unsigned int x8; float x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; double x_17_1_4; } x17; struct { float x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; } x18; struct { float x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; } x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; int x21; }*)arg2 maxJunctions:(unsigned int)arg3;
- (void)reset;
- (void)setJunctions:(id)arg1;
- (void)setTiles:(id)arg1;

@end
