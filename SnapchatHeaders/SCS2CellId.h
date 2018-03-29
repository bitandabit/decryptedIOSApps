//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCS2CellId : NSObject <NSCopying>
{
    struct S2CellId _s2CellId;
}

+ (int)levelForAccuracy:(double)arg1 minLevel:(int)arg2 maxLevel:(int)arg3;
+ (id)cellIdForToken:(id)arg1;
+ (id)cellIdForLatLong:(struct CLLocationCoordinate2D)arg1 atLevel:(int)arg2;
+ (id)cellIdForLatLong:(struct CLLocationCoordinate2D)arg1;
- (id).cxx_construct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)edgeNeighbors;
- (int)level;
- (id)parentAtLevel:(int)arg1;
- (id)parent;
- (struct S2CellId)getS2CellId;
- (void)setId:(struct S2CellId)arg1;
- (struct CLLocationCoordinate2D)latlng;
- (id)token;
- (unsigned long long)getId;
- (id)initWithS2CellId:(struct S2CellId)arg1;

@end
