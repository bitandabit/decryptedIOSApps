//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileManager;

@interface AMPFileSystem : NSObject
{
    NSFileManager *_fileManager;
}

@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (void)deleteFileAtPath:(id)arg1;
- (void)moveOldFile:(id)arg1 toNewLocation:(id)arg2;
- (id)dataFromFileAtPath:(id)arg1;
- (_Bool)saveData:(id)arg1 toFileAtPath:(id)arg2;
- (id)init;

@end
