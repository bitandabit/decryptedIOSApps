//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTResolver.h"

@class NSString;

@interface SPTResolverProxy : NSObject <SPTResolver>
{
    id <SPTResolver> _resolver;
}

@property(nonatomic) __weak id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (id)resolve:(id)arg1 onValue:(CDUnknownBlockType)arg2 onClose:(CDUnknownBlockType)arg3;
- (id)initWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
