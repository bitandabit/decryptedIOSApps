//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCMapSnapMetadata-Protocol.h"

@class NSString;

@interface SCMapSnapMetadata : NSObject <SCMapSnapMetadata>
{
    long long _viewableStatus;
    NSString *_storySnapId;
    NSString *_displayText;
    double _lat;
    double _lng;
    double _zoom;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(readonly, nonatomic) double lng; // @synthesize lng=_lng;
@property(readonly, nonatomic) double lat; // @synthesize lat=_lat;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(readonly, copy, nonatomic) NSString *storySnapId; // @synthesize storySnapId=_storySnapId;
@property(readonly, nonatomic) long long viewableStatus; // @synthesize viewableStatus=_viewableStatus;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewableStatus:(long long)arg1 storySnapId:(id)arg2 displayText:(id)arg3 lat:(double)arg4 lng:(double)arg5 zoom:(double)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

