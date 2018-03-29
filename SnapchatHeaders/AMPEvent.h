//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface AMPEvent : NSObject <NSCopying>
{
    _Bool _isCritical;
    NSMutableDictionary *_mutableProperties;
}

+ (id)eventFromProperties:(id)arg1 isCritical:(_Bool)arg2;
+ (id)eventFromProperties:(id)arg1 criticalEvents:(id)arg2;
+ (id)eventFromSCAEventWithProperties:(id)arg1 properties:(id)arg2 isCritical:(_Bool)arg3;
+ (id)eventFromSCAEvent:(id)arg1 isCritical:(_Bool)arg2;
+ (id)eventFromSCAEvent:(id)arg1 criticalEvents:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *mutableProperties; // @synthesize mutableProperties=_mutableProperties;
@property(nonatomic) _Bool isCritical; // @synthesize isCritical=_isCritical;
- (void).cxx_destruct;
- (void)_setDateInPropertiesMap:(id)arg1 usingKey:(id)arg2;
- (id)_getDateFromPropertiesMap:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToEvent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSDictionary *properties;
@property(retain, nonatomic) NSString *logQueueName;
@property(nonatomic) long long logQueueSequenceId;
@property(nonatomic) long long sequenceId;
@property(retain, nonatomic) NSDate *firstUploadAttemptDate;
@property(retain, nonatomic) NSDate *clientUploadDate;
- (id)initWithProperties:(id)arg1 isCritical:(_Bool)arg2;
- (id)initWithProperties:(id)arg1 criticalEvents:(id)arg2;

@end
