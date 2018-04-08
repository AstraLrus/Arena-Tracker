#ifndef THEMEHANDLER_H
#define THEMEHANDLER_H

#include <QString>
#include <QJsonObject>

class ThemeHandler
{

//Variables
private:
    static QString bgApp_;
    static QString borderApp_;
    static QString borderTransparent_;
    static int borderWidth_;
    static QString fgColor_;
    static QString themeColor1_;
    static QString themeColor2_;
    static QString bgWidgets_;
    static QString bgTabsColor_, hoverTabsColor_, selectedTabsColor_;
    static QString bgTopButtonsColor_, hoverTopButtonsColor_;
    static QString fgMenuColor_, bgMenuColor_;
    static QString bgSelectedItemMenuColor_, fgSelectedItemMenuColor_;
    static int borderDecksWidth_;
    static QString bgDecks_, borderDecks_;
    static QString bgSelectedItemListColor_, fgSelectedItemListColor_;
    static QString borderTooltipColor_, bgTooltipColor_, fgTooltipColor_;
    static QString borderProgressBarColor_, bgProgressBarColor_, fgProgressBarColor_, chunkProgressBarColor_;
    static QString borderLineEditColor_, bgLineEditColor_, fgLineEditColor_;
    static QString bgSelectionLineEditColor_, fgSelectionLineEditColor_;
    static QString defaultFont_, cardsFont_, bigFont_;
    static int cardsFontOffsetY_;
    static QString gamesOnZ2HColor_;
    static QString tabArenaFile_, tabConfigFile_, tabDeckFile_, tabEnemyDeckFile_, tabGraveyardFile_;
    static QString tabGamesFile_, tabHandFile_, tabLogFile_, tabPlanFile_;
    static QString buttonRemoveDeckFile_, buttonLoadDeckFile_, buttonNewDeckFile_, buttonSaveDeckFile_;
    static QString buttonMinFile_, buttonPlusFile_, buttonRemoveFile_;
    static QString buttonCloseFile_, buttonMinimizeFile_, buttonResizeFile_;
    static QString buttonForceDraftFile_, buttonDraftRefreshFile_;
    static QString buttonGamesReplayFile_, buttonGamesWebFile_;
    static QString buttonPlanFirstFile_, buttonPlanLastFile_, buttonPlanRefreshFile_;
    static QString buttonPlanPrevFile_, buttonPlanNextFile_, buttonPlanResizeFile_;
    static QString buttonGraveyardPlayerFile_, buttonGraveyardEnemyFile_;
    static QString buttonGraveyardMinionsFile_, buttonGraveyardWeaponsFile_;
    static QString bgCard1Files_[10], bgCard2Files_[10], heroFiles_[9];
    static QString bgTotalAttackFile_;
    static QString branchClosedFile_, branchOpenFile_;
    static QString coinFile_, firstFile_;
    static QString loseFile_, winFile_;
    static QString haBestFile_, haCloseFile_, haOpenFile_;
    static QString lfBestFile_, lfCloseFile_, lfOpenFile_;
    static QString speedLavaFile_, speedCloseFile_, speedOpenFile_;
    static QString handCardFile_, handCardBYFile_, handCardBYUnknownFile_;
    static QString starFile_, manaLimitFile_, unknownFile_;
    static QString minionsCounterFile_, spellsCounterFile_, weaponsCounterFile_, manaCounterFile_;
    static QString aoeMechanicFile_, tauntMechanicFile_, survivalMechanicFile_, drawMechanicFile_;
    static QString pingMechanicFile_, damageMechanicFile_, destroyMechanicFile_, reachMechanicFile_;
    static QString goldenMechanicFile_;
    static QString bgDraftMechanicsFile_, bgDraftMechanicsHelpFile_, fgDraftMechanicsColor_;
    static bool manaLimitBehind_;
    static QString themeLoaded_;


//Metodos
private:
    static void loadThemeValues(const QString &themePath, QByteArray &jsonData);
    static QString loadThemeFile(const QString &themePath, QJsonObject &jsonObject, const QString &key);
    static QString loadThemeCF(const QString &themePath, QJsonObject &jsonObject, const QString &key);    
    static QString loadThemeFont(const QString &themePath, QJsonObject &jsonObject, const QString &key);

public:
    static bool loadTheme(QString theme);
    static void defaultEmptyValues();
    static QString bgApp();
    static QString borderApp(bool transparent);
    static int borderWidth();
    static QString fgColor();
    static QString themeColor1();
    static QString themeColor2();
    static QString bgWidgets();
    static QString bgTabsColor();
    static QString hoverTabsColor();
    static QString selectedTabsColor();
    static QString bgTopButtonsColor();
    static QString hoverTopButtonsColor();
    static QString fgMenuColor();
    static QString bgSelectedItemMenuColor();
    static QString fgSelectedItemMenuColor();
    static QString bgMenuColor();
    static QString bgDecks();
    static QString borderDecks();
    static QString bgSelectedItemListColor();
    static QString fgSelectedItemListColor();
    static QString borderTooltipColor();
    static QString bgTooltipColor();
    static QString fgTooltipColor();
    static QString borderProgressBarColor();
    static QString bgProgressBarColor();
    static QString fgProgressBarColor();
    static QString chunkProgressBarColor();
    static QString borderLineEditColor();
    static QString bgLineEditColor();
    static QString fgLineEditColor();
    static QString bgSelectionLineEditColor();
    static QString fgSelectionLineEditColor();
    static QString defaultFont();
    static QString cardsFont();
    static QString bigFont();
    static int cardsFontOffsetY();
    static QString tabArenaFile();
    static QString bgCard1File(int order=9);
    static QString bgCard2File(int order=9);
    static QString branchClosedFile();
    static QString branchOpenFile();
    static QString buttonRemoveDeckFile();
    static QString buttonCloseFile();
    static QString coinFile();
    static QString tabConfigFile();
    static QString tabDeckFile();
    static QString buttonForceDraftFile();
    static QString buttonDraftRefreshFile();
    static QString tabEnemyDeckFile();
    static QString tabGraveyardFile();
    static QString firstFile();
    static QString tabGamesFile();
    static QString haBestFile();
    static QString haCloseFile();
    static QString tabHandFile();
    static QString handCardFile();
    static QString handCardBYFile();
    static QString handCardBYUnknownFile();
    static QString haOpenFile();
    static QString heroFile(int order);
    static QString heroFile(QString heroLog);
    static QString starFile();
    static QString lfBestFile();
    static QString lfCloseFile();
    static QString lfOpenFile();
    static QString speedLavaFile();
    static QString speedCloseFile();
    static QString speedOpenFile();
    static QString buttonLoadDeckFile();
    static QString tabLogFile();
    static QString loseFile();
    static QString manaLimitFile();
    static QString buttonMinimizeFile();
    static QString buttonMinFile();
    static QString buttonNewDeckFile();
    static QString tabPlanFile();
    static QString buttonPlanFirstFile();
    static QString buttonPlanLastFile();
    static QString buttonPlanRefreshFile();
    static QString buttonPlanPrevFile();
    static QString buttonPlanNextFile();
    static QString buttonPlanResizeFile();
    static QString buttonGraveyardPlayerFile();
    static QString buttonGraveyardEnemyFile();
    static QString buttonGraveyardMinionsFile();
    static QString buttonGraveyardWeaponsFile();
    static QString buttonPlusFile();
    static QString buttonRemoveFile();
    static QString buttonGamesReplayFile();
    static QString buttonResizeFile();
    static QString buttonSaveDeckFile();
    static QString unknownFile();
    static QString buttonGamesWebFile();
    static QString winFile();
    static QString bgTotalAttackFile();
    static QString gamesOnZ2HColor();
    static bool manaLimitBehind();
    static QString themeLoaded();
    static QString minionsCounterFile();
    static QString spellsCounterFile();
    static QString weaponsCounterFile();
    static QString manaCounterFile();
    static QString aoeMechanicFile();
    static QString tauntMechanicFile();
    static QString survivalMechanicFile();
    static QString drawMechanicFile();
    static QString pingMechanicFile();
    static QString damageMechanicFile();
    static QString destroyMechanicFile();
    static QString reachMechanicFile();
    static QString goldenMechanicFile();
    static QString bgDraftMechanicsFile();
    static QString fgDraftMechanicsColor();
    static QString bgDraftMechanicsHelpFile();
};

#endif // THEMEHANDLER_H
