//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPTJukeboxSession;

@protocol SPTJukeboxSessionDelegate <NSObject>
- (void)jukeboxSessionDidUpVote:(SPTJukeboxSession *)arg1;
- (void)jukeboxSessionDidFetchTracks:(SPTJukeboxSession *)arg1;
- (void)jukeboxSession:(SPTJukeboxSession *)arg1 didStartSessionWithID:(NSString *)arg2;
@end

