//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCReportAdapter : NSObject
{
}

+ (void)showNotificationWithSuccess:(_Bool)arg1;
+ (id)shared;
- (void)sendLensReportWithContext:(id)arg1 authenticator:(id)arg2;
- (void)sendAdReport;
- (void)sendSearchDynamicStoryReportWithContext:(id)arg1;
- (void)sendMapStoryReportWithContext:(id)arg1;
- (void)sendUserReportWithContext:(id)arg1 authenticator:(id)arg2;
- (void)sendStoryReportWithContext:(id)arg1 authenticator:(id)arg2;
- (void)sendSnapReportWithContext:(id)arg1 authenticator:(id)arg2;
- (void)sendPublicUserStoriesReport:(id)arg1 authenticator:(id)arg2;
- (void)sendReportWithContext:(id)arg1 authenticator:(id)arg2;

@end

