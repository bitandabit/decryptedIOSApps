//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTPaymentFailureNotificationOfflineInfoManager : NSObject
{
    id <SPTResolver> _resolver;
}

@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (long long)numberOfOfflineListsFromResponse:(id)arg1;
- (void)fetchNumberOfOfflineLists:(CDUnknownBlockType)arg1;
- (id)initWithResolver:(id)arg1;

@end

