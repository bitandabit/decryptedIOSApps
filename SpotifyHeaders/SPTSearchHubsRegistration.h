//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EXP_HUBComponentRegistry;

@interface SPTSearchHubsRegistration : NSObject
{
    id <GLUETheme> _theme;
    id <EXP_HUGSStyleOverrider> _styleOverrider;
    EXP_HUBComponentRegistry *_componentRegistry;
}

@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, nonatomic) id <EXP_HUGSStyleOverrider> styleOverrider; // @synthesize styleOverrider=_styleOverrider;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)unregisterSearchComponents;
- (void)registerSearchComponents;
- (id)initWithTheme:(id)arg1 styleOverrider:(id)arg2 componentRegistry:(id)arg3;

@end
