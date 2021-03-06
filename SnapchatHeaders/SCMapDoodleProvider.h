//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SCUserSession;

@interface SCMapDoodleProvider : NSObject
{
    SCUserSession *_userSession;
    NSMutableDictionary *_doodleDict;
    NSString *_doodleDirectoryPath;
    _Bool _isLoaded;
}

- (void).cxx_destruct;
- (void)willDisplayChatMessageWithDoodle:(id)arg1;
- (id)doodleWithIdentifier:(id)arg1;
- (void)fetchAllDoodlesWithCompletion:(CDUnknownBlockType)arg1;
- (id)allLoadedDoodles;
- (void)removeDoodleWithIdentifier:(id)arg1;
- (_Bool)tryToAddDoodleFromData:(id)arg1;
- (void)addDoodle:(id)arg1;
- (void)_loadAllDoodlesWithCompletion:(CDUnknownBlockType)arg1;
- (void)startObservingDoodles;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

@end

