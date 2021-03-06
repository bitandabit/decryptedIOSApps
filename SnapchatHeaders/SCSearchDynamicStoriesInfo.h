//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCCheetahCompositeStoryId;

@interface SCSearchDynamicStoriesInfo : NSObject <NSCopying, NSCoding>
{
    unsigned long long _totalSnapCount;
    NSString *_dynamicStoryId;
    double _totalDuration;
    long long _dynamicStoryType;
    SCCheetahCompositeStoryId *_compositeStoryId;
}

@property(readonly, copy, nonatomic) SCCheetahCompositeStoryId *compositeStoryId; // @synthesize compositeStoryId=_compositeStoryId;
@property(readonly, nonatomic) long long dynamicStoryType; // @synthesize dynamicStoryType=_dynamicStoryType;
@property(readonly, nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(readonly, copy, nonatomic) NSString *dynamicStoryId; // @synthesize dynamicStoryId=_dynamicStoryId;
@property(readonly, nonatomic) unsigned long long totalSnapCount; // @synthesize totalSnapCount=_totalSnapCount;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTotalSnapCount:(unsigned long long)arg1 dynamicStoryId:(id)arg2 totalDuration:(double)arg3 dynamicStoryType:(long long)arg4 compositeStoryId:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end

