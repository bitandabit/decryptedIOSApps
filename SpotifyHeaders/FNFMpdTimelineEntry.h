//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface FNFMpdTimelineEntry : NSObject
{
    unsigned int _time;
    unsigned int _duration;
    NSURL *_mediaUrl;
}

@property(readonly, copy, nonatomic) NSURL *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(readonly, nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned int time; // @synthesize time=_time;
- (void).cxx_destruct;
- (id)initWithTime:(unsigned int)arg1 duration:(unsigned int)arg2 mediaUrl:(id)arg3;

@end
