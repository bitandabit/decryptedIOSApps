//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol SPTInstrumentationInteractionLogger <NSObject>
- (void)logInteractionWithItemID:(NSString *)arg1 interactionID:(NSString *)arg2 interactionType:(NSString *)arg3 interactionIntent:(NSString *)arg4 pageIdentifier:(NSString *)arg5 pageURI:(NSURL *)arg6;
- (id)initWithTransport:(id <SPTInstrumentationTransport>)arg1;
@end

