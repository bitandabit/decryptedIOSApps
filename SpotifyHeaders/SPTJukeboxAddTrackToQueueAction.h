//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPAction.h"

@class NSURL, SPTJukeboxSession;

@interface SPTJukeboxAddTrackToQueueAction : SPAction
{
    NSURL *_url;
    SPTJukeboxSession *_session;
}

@property(retain, nonatomic) SPTJukeboxSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (id)image;
- (id)title;
- (id)initWithTrackURL:(id)arg1 session:(id)arg2;

@end

