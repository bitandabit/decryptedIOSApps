//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, SCFideliusLogger;
@protocol SCFideliusDataProvider, SCPerforming;

@interface SCFideliusSnapService : NSObject
{
    id <SCFideliusDataProvider> _dataSource;
    SCFideliusLogger *_logger;
    id <SCPerforming> _performer;
    NSMutableArray *_seksToDelete;
    NSMutableDictionary *_seksToSave;
}

- (void).cxx_destruct;
- (id)_devicesForFriend:(id)arg1;
- (void)processQueuedSeks;
- (void)_deleteSekForSnapId:(id)arg1;
- (void)deleteSekForSnapId:(id)arg1;
- (void)_saveSek:(id)arg1;
- (void)saveSek:(id)arg1 date:(id)arg2 snapId:(id)arg3;
- (id)_performPhiForInput:(id)arg1 device:(id)arg2 salt:(id)arg3 logger:(id)arg4;
- (id)_wrapFideliusSnap:(id)arg1 snap:(id)arg2 eventName:(id)arg3;
- (id)_wrapFideliusKey:(id)arg1 friendId:(id)arg2 uniqueIdForTimer:(id)arg3 friendKeys:(id)arg4 eventName:(id)arg5;
- (id)wrapFideliusKey:(id)arg1 friendId:(id)arg2 uniqueIdForTimer:(id)arg3 eventName:(id)arg4;
- (void)phi:(id)arg1 params:(id)arg2;
- (void)_phi:(id)arg1 recipient:(id)arg2 params:(id)arg3;
- (id)initWithDataSource:(id)arg1 useFakePerformer:(_Bool)arg2 logger:(id)arg3;

@end

