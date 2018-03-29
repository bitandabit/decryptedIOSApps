//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCKSimpleHTTPRequestDelegate.h"

@class GCKSenderInfo, GCKSimpleHTTPRequest, NSDateFormatter, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface GCKClearcutLogger : NSObject <GCKSimpleHTTPRequestDelegate>
{
    NSString *_logDirectory;
    unsigned long long _maxLogFiles;
    unsigned long long _maxRequestSize;
    NSMutableArray *_pendingRequests;
    NSMutableDictionary *_logWriters;
    unsigned long long _uploadTaskID;
    long long _uploadDelayMillis;
    _Bool _uploadScheduled;
    GCKSimpleHTTPRequest *_httpRequest;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_serverURL;
    NSDateFormatter *_dateFormatter;
    GCKSenderInfo *_senderInfo;
    NSString *_osMajorVersion;
    NSString *_applicationVersion;
    NSString *_installIdentifier;
}

@property(copy, nonatomic) NSString *installIdentifier; // @synthesize installIdentifier=_installIdentifier;
@property(copy) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
- (void).cxx_destruct;
- (void)httpRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)httpRequest:(id)arg1 didCompleteWithStatusCode:(long long)arg2 finalURL:(id)arg3 headers:(id)arg4 data:(id)arg5 mimeType:(id)arg6;
- (long long)currentTimeMillis;
- (void)closeLogWriters;
- (id)buildLogRequestForLogSource:(int)arg1 logFile:(id)arg2;
- (void)processNextRequest;
- (void)scheduleNextUpload;
- (void)flushLogs;
- (void)uploadLogs;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)scanLogCache;
- (void)clearLogCache;
- (void)logEvent:(id)arg1 fromSource:(int)arg2;
- (void)logEventWithExtension:(id)arg1 eventCode:(int)arg2 fromSource:(int)arg3;
- (void)logEventWithExtension:(id)arg1 fromSource:(int)arg2;
- (void)dealloc;
- (id)initWithMaxLogFiles:(unsigned long long)arg1 maxRequestSize:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

