//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTHubDictionaryPathNode : NSObject
{
    _Bool _acceptsNilInput;
    SPTHubDictionaryPathNode *_next;
    CDUnknownBlockType _transformation;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType transformation; // @synthesize transformation=_transformation;
@property(readonly, nonatomic) _Bool acceptsNilInput; // @synthesize acceptsNilInput=_acceptsNilInput;
@property(retain, nonatomic) SPTHubDictionaryPathNode *next; // @synthesize next=_next;
- (void).cxx_destruct;
- (id)valuesByPerformingTransformationWithInput:(id)arg1;
- (id)initWithTransformation:(CDUnknownBlockType)arg1 acceptsNilInput:(_Bool)arg2;
- (id)initWithTransformation:(CDUnknownBlockType)arg1;

@end
