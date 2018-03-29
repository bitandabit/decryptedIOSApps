//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUGeofilterMarkup-Protocol.h"

@class NSNumber, NSString, SOJUGeofilterDisplayParameters, SOJUGeofilterLayoutParameters, SOJULocalDateTimeInterval, SOJUUnlockablesCompanionCreativeProperties;

@interface SOJUGeofilterMarkup : NSObject <SOJUGeofilterMarkup>
{
    NSNumber *_refreshRate;
    NSString *_type;
    NSString *_source;
    SOJUGeofilterLayoutParameters *_layoutParameters;
    SOJUGeofilterDisplayParameters *_displayParameters;
    SOJULocalDateTimeInterval *_displayScheduleDeprecated;
    SOJUUnlockablesCompanionCreativeProperties *_companionCreativeProperties;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUUnlockablesCompanionCreativeProperties *companionCreativeProperties; // @synthesize companionCreativeProperties=_companionCreativeProperties;
@property(readonly, copy, nonatomic) SOJULocalDateTimeInterval *displayScheduleDeprecated; // @synthesize displayScheduleDeprecated=_displayScheduleDeprecated;
@property(readonly, copy, nonatomic) SOJUGeofilterDisplayParameters *displayParameters; // @synthesize displayParameters=_displayParameters;
@property(readonly, copy, nonatomic) SOJUGeofilterLayoutParameters *layoutParameters; // @synthesize layoutParameters=_layoutParameters;
@property(readonly, copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSNumber *refreshRate; // @synthesize refreshRate=_refreshRate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRefreshRate:(id)arg1 type:(id)arg2 source:(id)arg3 layoutParameters:(id)arg4 displayParameters:(id)arg5 displayScheduleDeprecated:(id)arg6 companionCreativeProperties:(id)arg7;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)typeEnum;
- (long long)refreshRateValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

