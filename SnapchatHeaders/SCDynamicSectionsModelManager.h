//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCArchiveObjectManager-Protocol.h"

@class NSString, SCArchiveLoader, SCDynamicSectionsModelListenerAnnouncer, SCTiles;

@interface SCDynamicSectionsModelManager : NSObject <SCArchiveObjectManager>
{
    _Bool _allowUnloadedModelAccess;
    SCArchiveLoader *_loader;
    SCDynamicSectionsModelListenerAnnouncer *_announcer;
    SCTiles *_tiles;
}

+ (id)path;
+ (void)handleLogout;
+ (id)shared;
@property(retain, nonatomic) SCTiles *tiles; // @synthesize tiles=_tiles;
@property(readonly, nonatomic) SCDynamicSectionsModelListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(readonly, nonatomic) SCArchiveLoader *loader; // @synthesize loader=_loader;
- (void).cxx_destruct;
- (_Bool)shouldLoadFromDiskImmediately;
- (void)clear;
- (_Bool)saveState;
- (void)markAsLoadedWithoutLoadingFromDisk;
- (void)loadFromDiskAsync:(_Bool)arg1;
- (CDUnknownBlockType)_loadedBlock;
- (void)waitUntilModelLoadsWithCallback:(CDUnknownBlockType)arg1;
- (void)accessPotentiallyUnloadedModelWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

