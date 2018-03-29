//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSArray, NSDictionary, NSString, SCOperaPage;
@protocol SCOperaLabelTextProvider;

@interface SCOperaActionMenuLayer : NSObject <SCOperaLayer>
{
    _Bool _displayScore;
    _Bool _sendingEnabled;
    _Bool _sendingPreparing;
    SCOperaPage *_page;
    NSString *_displayName;
    NSString *_username;
    NSString *_timestamp;
    unsigned long long _score;
    unsigned long long _hdState;
    NSArray *_enabledButtons;
    NSArray *_enabledV2Buttons;
    id <SCOperaLabelTextProvider> _displayNameTextProvider;
    NSDictionary *_displayNameTextProviderProperties;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *displayNameTextProviderProperties; // @synthesize displayNameTextProviderProperties=_displayNameTextProviderProperties;
@property(readonly, nonatomic) id <SCOperaLabelTextProvider> displayNameTextProvider; // @synthesize displayNameTextProvider=_displayNameTextProvider;
@property(readonly, nonatomic) NSArray *enabledV2Buttons; // @synthesize enabledV2Buttons=_enabledV2Buttons;
@property(readonly, nonatomic) NSArray *enabledButtons; // @synthesize enabledButtons=_enabledButtons;
@property(readonly, nonatomic) _Bool sendingPreparing; // @synthesize sendingPreparing=_sendingPreparing;
@property(readonly, nonatomic) _Bool sendingEnabled; // @synthesize sendingEnabled=_sendingEnabled;
@property(readonly, nonatomic) unsigned long long hdState; // @synthesize hdState=_hdState;
@property(readonly, nonatomic) _Bool displayScore; // @synthesize displayScore=_displayScore;
@property(readonly, nonatomic) unsigned long long score; // @synthesize score=_score;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
