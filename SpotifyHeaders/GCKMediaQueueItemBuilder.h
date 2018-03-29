//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCKMediaInformation, NSArray;

@interface GCKMediaQueueItemBuilder : NSObject
{
    unsigned long long _itemID;
    _Bool _autoplay;
    GCKMediaInformation *_mediaInformation;
    double _startTime;
    double _playbackDuration;
    double _preloadTime;
    NSArray *_activeTrackIDs;
    id _customData;
}

@property(copy, nonatomic) id customData; // @synthesize customData=_customData;
@property(copy, nonatomic) NSArray *activeTrackIDs; // @synthesize activeTrackIDs=_activeTrackIDs;
@property(nonatomic) double preloadTime; // @synthesize preloadTime=_preloadTime;
@property(nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(copy, nonatomic) GCKMediaInformation *mediaInformation; // @synthesize mediaInformation=_mediaInformation;
- (void).cxx_destruct;
- (id)build;
- (id)initWithMediaQueueItem:(id)arg1;
- (id)init;

@end

