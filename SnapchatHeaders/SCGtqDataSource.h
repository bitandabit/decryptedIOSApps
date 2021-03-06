//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCGtqDirectMigrationLogger, SCGtqNetworkController, SCGtqUnlockablesDataSourceListenerAnnouncer, SCQueuePerformer, SCUserSession;

@interface SCGtqDataSource : NSObject
{
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    SCGtqNetworkController *_network;
    SCGtqUnlockablesDataSourceListenerAnnouncer *_announcer;
    SCGtqDirectMigrationLogger *_migrationLogger;
}

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)fetchUnlockablesWithDataProvider:(id)arg1 requestContext:(id)arg2;
- (id)initWithUserSession:(id)arg1;

@end

