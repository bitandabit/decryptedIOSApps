//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTJukeboxDataSourceDelegate.h"

@class NSArray, NSDictionary, NSString, SPTJukeboxDataSource;

@interface SPTJukeboxSession : NSObject <SPTJukeboxDataSourceDelegate>
{
    id <SPTJukeboxSessionDelegate> _delegate;
    NSArray *_tracks;
    NSDictionary *_trackUIDs;
    SPTJukeboxDataSource *_dataSource;
    id <SPTEntityService> _entityService;
    NSString *_sessionID;
}

@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
@property(readonly, nonatomic) SPTJukeboxDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSDictionary *trackUIDs; // @synthesize trackUIDs=_trackUIDs;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(nonatomic) __weak id <SPTJukeboxSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)jukeboxDataSourceDidUpVote:(id)arg1;
- (void)jukeboxDataSource:(id)arg1 didFetchTracks:(id)arg2;
- (void)jukeboxDataSource:(id)arg1 didStartSession:(id)arg2;
- (void)upVoteTrackWithUID:(id)arg1;
- (void)addTrackWithURL:(id)arg1;
- (void)fetchTracks;
- (void)startSession;
- (id)initWithDataSource:(id)arg1 entityService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

