//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface ADLMediaIssueEvent : NSObject
{
    _Bool _isStarted;
    NSString *_scopeId;
    long long _mediaType;
    NSNumber *_userId;
    long long _issueType;
    NSString *_msg;
}

+ (id)MediaIssueEventWithScopeId:(id)arg1 mediaType:(long long)arg2 userId:(id)arg3 isStarted:(_Bool)arg4 issueType:(long long)arg5 msg:(id)arg6;
@property(readonly, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(readonly, nonatomic) long long issueType; // @synthesize issueType=_issueType;
@property(readonly, nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(readonly, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithScopeId:(id)arg1 mediaType:(long long)arg2 userId:(id)arg3 isStarted:(_Bool)arg4 issueType:(long long)arg5 msg:(id)arg6;

@end
