//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SPTHubDictionaryTransformable.h"

@class NSString, SPTHubUserInteractionTarget;

@interface SPTHubBlockFooterData : NSObject <SPTHubDictionaryTransformable, NSCopying>
{
    NSString *_title;
    SPTHubUserInteractionTarget *_userInteractionTarget;
}

@property(readonly, nonatomic) SPTHubUserInteractionTarget *userInteractionTarget; // @synthesize userInteractionTarget=_userInteractionTarget;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 pathSet:(id)arg2;
- (id)initWithTitle:(id)arg1 userInteractionTarget:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
