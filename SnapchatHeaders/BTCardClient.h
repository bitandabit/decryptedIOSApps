//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BTAPIClient;

@interface BTCardClient : NSObject
{
    BTAPIClient *_apiClient;
}

+ (id)validationErrorUserInfo:(id)arg1;
+ (void)load;
@property(retain, nonatomic) BTAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void).cxx_destruct;
- (void)sendUnionPayAnalyticsEvent:(_Bool)arg1;
- (void)sendAnalyticsEventWithSuccess:(_Bool)arg1;
- (void)tokenizeCard:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tokenizeCard:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithAPIClient:(id)arg1;

@end

