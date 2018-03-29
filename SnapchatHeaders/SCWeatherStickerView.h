//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCInfoStickerView.h"

@class NSArray, NSString, SCWeather, SCWeatherDailyView, SCWeatherFilterInformationView, SCWeatherHourlyView, SCWeatherViewMetrics, UILabel, UIView;
@protocol SCWeatherStickerViewDelegate;

@interface SCWeatherStickerView : SCInfoStickerView
{
    SCWeather *_weather;
    UILabel *_degreeLabel;
    long long _orientation;
    long long _roundedTempDegCelsius;
    long long _roundedTempDegFahrenheit;
    UILabel *_temperatureLabel;
    UILabel *_temperatureScaleLabel;
    SCWeatherHourlyView *_hourlyWeatherView;
    SCWeatherDailyView *_dailyWeatherView;
    SCWeatherFilterInformationView *_informationView;
    SCWeatherViewMetrics *_weatherViewMetrics;
    _Bool _shouldDisplayForecast;
    _Bool _shouldDisplayInformationView;
    NSArray *_hourlyForecasts;
    NSArray *_dailyForecasts;
    NSString *_locationName;
    _Bool _assetsDownloaded;
    UIView *_temperatureView;
    long long _weatherViewType;
    id <SCWeatherStickerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCWeatherStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long weatherViewType; // @synthesize weatherViewType=_weatherViewType;
- (void).cxx_destruct;
- (void)_regenerateViews;
- (void)_updateWeatherFilterView:(unsigned long long)arg1;
- (void)_updateInformationView:(unsigned long long)arg1;
- (void)_updateDailyForecastView:(unsigned long long)arg1 isInPreviewSticker:(_Bool)arg2;
- (void)_updateHourlyForecastView:(unsigned long long)arg1 isInPreviewSticker:(_Bool)arg2;
- (void)_switchTemperatureScale:(unsigned long long)arg1;
- (void)_validateForecastData:(id)arg1;
- (id)_stringForTemperature:(unsigned long long)arg1;
- (id)_stringForTemperatureScale:(unsigned long long)arg1;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)_onTapInformationView:(unsigned long long)arg1;
- (void)_updateSCWeatherStyle;
- (void)tap:(id)arg1;
- (void)setDisplayed:(_Bool)arg1;
- (void)setTemperatureToDisplay;
- (id)initWithFrame:(struct CGRect)arg1 weather:(id)arg2;
- (id)initWithPickerFrame:(struct CGRect)arg1 weather:(id)arg2;

@end
