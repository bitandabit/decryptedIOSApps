//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary;

@interface SCSearchSectionGridLayoutAttributes : NSObject <NSCopying>
{
    double _sectionHeight;
    NSDictionary *_layoutAttributesByIndexPath;
}

@property(readonly, copy, nonatomic) NSDictionary *layoutAttributesByIndexPath; // @synthesize layoutAttributesByIndexPath=_layoutAttributesByIndexPath;
@property(readonly, nonatomic) double sectionHeight; // @synthesize sectionHeight=_sectionHeight;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionHeight:(double)arg1 layoutAttributesByIndexPath:(id)arg2;

@end

