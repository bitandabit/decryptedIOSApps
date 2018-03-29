//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUAdClientInitRequest-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdClientInitRequest : NSObject <SOJUAdClientInitRequest>
{
    NSString *_userAdId;
    NSNumber *_canTrack;
    NSString *_rawUserData;
    NSNumber *_canReroute;
    NSNumber *_debug;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *debug; // @synthesize debug=_debug;
@property(readonly, copy, nonatomic) NSNumber *canReroute; // @synthesize canReroute=_canReroute;
@property(readonly, copy, nonatomic) NSString *rawUserData; // @synthesize rawUserData=_rawUserData;
@property(readonly, copy, nonatomic) NSNumber *canTrack; // @synthesize canTrack=_canTrack;
@property(readonly, copy, nonatomic) NSString *userAdId; // @synthesize userAdId=_userAdId;
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
- (id)initWithUserAdId:(id)arg1 canTrack:(id)arg2 rawUserData:(id)arg3 canReroute:(id)arg4 debug:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)debugValue;
- (_Bool)canRerouteValue;
- (_Bool)canTrackValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
