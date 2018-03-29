//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BCOVCuePoint-Protocol.h"
#import "BCOVMutableCuePoint-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface BCOVCuePoint : NSObject <BCOVMutableCuePoint, BCOVCuePoint, NSCopying>
{
    NSString *_type;
    NSDictionary *_properties;
    CDStruct_1b6d18a9 _position;
}

+ (id)cuePointWithType:(id)arg1 positionInSeconds:(double)arg2 properties:(id)arg3;
+ (id)beforeCuePointOfType:(id)arg1 properties:(id)arg2;
+ (id)afterCuePointOfType:(id)arg1 properties:(id)arg2;
+ (id)cuePointFromJSONDictionary:(id)arg1;
- (void)setProperties:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *properties;
- (void)setType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *type;
- (void)setPosition:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 position;
- (void).cxx_destruct;
- (_Bool)hasPosition:(CDStruct_1b6d18a9)arg1;
- (long long)compare:(id)arg1;
- (id)update:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToCuePoint:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithType:(id)arg1 position:(CDStruct_1b6d18a9)arg2 properties:(id)arg3;
- (id)initWithType:(id)arg1 position:(CDStruct_1b6d18a9)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

