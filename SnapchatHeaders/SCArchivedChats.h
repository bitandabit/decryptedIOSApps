//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;
@protocol OS_dispatch_group;

@interface SCArchivedChats : NSObject <NSCoding>
{
    // Error parsing type: Ai, name: _loaded
    NSObject<OS_dispatch_group> *_loadedGroup;
    _Bool _hasUnviewedSnaps;
    _Bool _hasUnviewedChats;
    _Bool _hasUnviewedCash;
    _Bool _legacyPaginatedChatsFormat;
    NSString *_path;
    long long _unreadCount;
}

+ (id)emptyArchive;
@property(readonly, nonatomic) _Bool legacyPaginatedChatsFormat; // @synthesize legacyPaginatedChatsFormat=_legacyPaginatedChatsFormat;
@property(readonly, nonatomic) _Bool hasUnviewedCash; // @synthesize hasUnviewedCash=_hasUnviewedCash;
@property(readonly, nonatomic) _Bool hasUnviewedChats; // @synthesize hasUnviewedChats=_hasUnviewedChats;
@property(readonly, nonatomic) _Bool hasUnviewedSnaps; // @synthesize hasUnviewedSnaps=_hasUnviewedSnaps;
@property(readonly, nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)removeArchivedFile;
- (void)loadChatsAsync:(CDUnknownBlockType)arg1 loadedBlock:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)waitUntilLoadedOnQueue:(id)arg1 loadedBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool loaded;
- (id)initForUpgradingPaginatedChatsAtPath:(id)arg1 withUnreadCount:(long long)arg2;
- (id)initWithPath:(id)arg1 chats:(id)arg2;
- (id)init;

@end
