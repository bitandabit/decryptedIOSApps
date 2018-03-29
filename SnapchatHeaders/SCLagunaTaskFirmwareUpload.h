//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLagunaTask.h"

@class NSData, NSFileHandle;

@interface SCLagunaTaskFirmwareUpload : SCLagunaTask
{
    unsigned long long _bytesSent;
    unsigned long long _fileSize;
    unsigned long long _chunkSize;
    NSFileHandle *_fileHandle;
    NSData *_currentChunk;
}

@property(retain, nonatomic) NSData *currentChunk; // @synthesize currentChunk=_currentChunk;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(readonly, nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
- (void).cxx_destruct;
- (_Bool)isFinished;
- (_Bool)handleResponse:(id)arg1;
- (id)nextRequest:(long long)arg1;
- (unsigned long long)type;
- (id)initWithFilepath:(id)arg1 device:(id)arg2;

@end

