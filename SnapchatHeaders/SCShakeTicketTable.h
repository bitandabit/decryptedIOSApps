//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EGODatabase, EGODatabaseStatement;

@interface SCShakeTicketTable : NSObject
{
    EGODatabase *_database;
    EGODatabaseStatement *_insertShakeTicket;
    EGODatabaseStatement *_updateShakeTicketStatus;
    EGODatabaseStatement *_getNextPendingTicket;
}

- (void).cxx_destruct;
- (id)_databaseURL;
- (void)_setupDatabase;
- (id)getNextPendingTicket;
- (_Bool)updateTicketStatusWithID:(id)arg1 uploadStatus:(long long)arg2;
- (_Bool)saveShakeTicket:(id)arg1;
- (void)deleteDatabase;
- (id)init;

@end

