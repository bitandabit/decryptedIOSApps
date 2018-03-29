//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCCornerRadii : NSObject <NSCopying>
{
    double _topLeftRadius;
    double _topRightRadius;
    double _bottomLeftRadius;
    double _bottomRightRadius;
}

@property(readonly, nonatomic) double bottomRightRadius; // @synthesize bottomRightRadius=_bottomRightRadius;
@property(readonly, nonatomic) double bottomLeftRadius; // @synthesize bottomLeftRadius=_bottomLeftRadius;
@property(readonly, nonatomic) double topRightRadius; // @synthesize topRightRadius=_topRightRadius;
@property(readonly, nonatomic) double topLeftRadius; // @synthesize topLeftRadius=_topLeftRadius;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopLeftRadius:(double)arg1 topRightRadius:(double)arg2 bottomLeftRadius:(double)arg3 bottomRightRadius:(double)arg4;

@end
