//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface SCLagunaMediaListReconciler : NSObject
{
    _Bool _hdOnlyEnabled;
    NSArray *_mediaList;
    NSArray *_contentList;
    NSDictionary *_contentForName;
}

@property(nonatomic) _Bool hdOnlyEnabled; // @synthesize hdOnlyEnabled=_hdOnlyEnabled;
@property(retain, nonatomic) NSDictionary *contentForName; // @synthesize contentForName=_contentForName;
@property(retain, nonatomic) NSArray *contentList; // @synthesize contentList=_contentList;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList=_mediaList;
- (void).cxx_destruct;
- (id)contentNamesMissingTimestamp;
- (id)contentNamesMissingMetadata;
- (id)necessaryMetadataTasks;
- (id)necessaryMediaTransferTasks;
- (id)_btClassicTaskForContent:(id)arg1 component:(unsigned long long)arg2;
- (id)necessaryDeletionLogicTasks;
- (void)updateContentWithMediaList;
- (_Bool)_isContentFullySynced:(id)arg1;
- (_Bool)_containsFileType:(unsigned long long)arg1 contentName:(id)arg2;
- (void)_updateFilesizeIfNecessaryForFile:(id)arg1 content:(id)arg2;
- (id)initWithMediaList:(id)arg1 contentList:(id)arg2 hdOnlyEnabled:(_Bool)arg3;

@end
