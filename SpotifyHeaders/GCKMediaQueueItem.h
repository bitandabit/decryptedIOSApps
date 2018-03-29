//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class GCKMediaInformation, NSArray;

@interface GCKMediaQueueItem : NSObject <NSCopying>
{
    _Bool _autoplay;
    GCKMediaInformation *_mediaInformation;
    unsigned long long _itemID;
    double _startTime;
    double _playbackDuration;
    double _preloadTime;
    NSArray *_activeTrackIDs;
    id _customData;
}

@property(retain, nonatomic) id customData; // @synthesize customData=_customData;
@property(retain, nonatomic) NSArray *activeTrackIDs; // @synthesize activeTrackIDs=_activeTrackIDs;
@property(nonatomic) double preloadTime; // @synthesize preloadTime=_preloadTime;
@property(nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) unsigned long long itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) GCKMediaInformation *mediaInformation; // @synthesize mediaInformation=_mediaInformation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)clearItemID;
- (id)JSONObject;
- (id)mediaQueueItemModifiedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)updateFromJSONObject:(id)arg1;
- (id)initWithJSONObject:(id)arg1 mediaInformation:(id)arg2;
- (id)initWithMediaInformation:(id)arg1 autoplay:(_Bool)arg2 startTime:(double)arg3 preloadTime:(double)arg4 activeTrackIDs:(id)arg5 customData:(id)arg6;
- (id)initWithMediaInformation:(id)arg1 autoplay:(_Bool)arg2 startTime:(double)arg3 playbackDuration:(double)arg4 preloadTime:(double)arg5 activeTrackIDs:(id)arg6 customData:(id)arg7;

@end

