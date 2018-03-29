//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AMPFilePaths : NSObject
{
    NSString *_storageRoot;
    NSString *_fileNamespace;
    NSString *_libraryDirectory;
    NSString *_cacheDirectory;
}

@property(retain, nonatomic) NSString *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
@property(retain, nonatomic) NSString *libraryDirectory; // @synthesize libraryDirectory=_libraryDirectory;
@property(readonly, nonatomic) NSString *fileNamespace; // @synthesize fileNamespace=_fileNamespace;
@property(copy, nonatomic) NSString *storageRoot; // @synthesize storageRoot=_storageRoot;
- (void).cxx_destruct;
- (id)v3SessionInfoPath;
- (id)v3EventListPlistPath;
- (id)v3EventListDictionaryPath;
- (id)v2SessionInfoPath;
- (id)v2EventListPlistPath;
- (id)v2EventListDictionaryPath;
- (id)v1EventsDataPath;
- (id)v1PropertyListPath;
- (id)v0PropertyListPath;
- (id)v0EventsDataPath;
- (id)versionPropertyListPath;
- (id)initWithStorageRoot:(id)arg1 fileNamespace:(id)arg2;

@end

